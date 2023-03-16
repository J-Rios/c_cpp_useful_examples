
/* Libraries */

// Class Interface
#include "singleton.h"

// Standard C++ Libraries
#include <cstdint>
#include <iostream>

/*****************************************************************************/

/* C++ Portability Fix */

// Check for nullptr and define it as NULL if it doesn't exists (to support
// older version of C++)
#if !defined(nullptr)
    #define nullptr NULL
#endif

/*****************************************************************************/

// Reserved static memory space in BSS section to instantiate the object
// through a placement new operator in Singleton get_instance() function
static uint8_t bss_memory_singleton[sizeof(Singleton)];

// Initialization of Singleton instance pointer (needed by linker)
Singleton* Singleton::instance = nullptr;

/*****************************************************************************/

/* Singleton Constructor */

/**
 * @details
 * The Constructor of the class initializes all the internal attributes to
 * initial default values.
 */
Singleton::Singleton()
{
    std::cout << "Singleton Constructor Run" << std::endl;
    instance = nullptr;
    initialized = false;
    my_var1 = 0;
    my_var2 = '\0';
}

/*****************************************************************************/

/* Singleton Get Instance Method */

/**
 * @details
 * This function instantiate the object of this Singleton component if it
 * wasn't been instantiate, and return the address of the instantiated object.
 * The instantiation is done by a "placement new" operation that assign the
 * reserved static memory for the object from the BSS section (this avoid the
 * use of dynamic memory and the HEAP section usage).
 */
Singleton* Singleton::get_instance()
{
    if (instance == nullptr)
    {
        instance = new(bss_memory_singleton) Singleton();
        std::cout << "Singleton Instantiatiated" << std::endl;
    }

    return instance;
}

/*****************************************************************************/

/* Public Methods */

/**
 * @details
 * This function initialize the component by setting the internal attributes
 * to the provided values. It set the initialized status attribute to true to
 * identify that the component has been initialized and the process() method
 * can be used.
 */
bool Singleton::init(const int var1, const char var2, const bool reinit)
{
    // Deny initialization if not requested and already initialized
    if ( (reinit == false) && (initialized == true) )
    {   return false;   }

    std::cout << "Singleton_" << var1 << " init()" << std::endl;

    my_var1 = var1;
    my_var2 = var2;

    initialized = true;

    return initialized;
}

/**
 * @details
 * This function do nothing if the component has not been initialized before
 * (init() method not called), otherwise it run an iteration of the main
 * behaviour of the component.
 */
bool Singleton::process()
{
    // Do nothing if the component has not been initialized
    if (initialized == false)
    {   return false;   }

    std::cout << "Singleton process()" << std::endl;

    // Do something here

    return true;
}

/*****************************************************************************/

/* Private Methods */

