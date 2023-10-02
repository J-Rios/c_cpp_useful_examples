/**
 * @file    myclass.cpp
 * @author  Author Name
 * @date    yyyy.mm.dd
 * @version 1.0.0
 * @brief   Brief description of the component.
 */

/*****************************************************************************/

/* Libraries */

// Class Interface
#include "myclass.h"

// Standard C++ Libraries
//#include <cinttypes>

/*****************************************************************************/

/* C++ Portability Fixes */

// Check for nullptr and define it as NULL if it doesn't exists (to support
// older version of C++)
#if !defined(nullptr)
    #define nullptr NULL
#endif

/*****************************************************************************/

/* Namespace Isolation Open */

namespace mylibs { namespace layout {

/*****************************************************************************/

/* Class Constructor */

/**
 * @details
 * The Constructor of the class initializes all the internal attributes to
 * initial default values.
 */
My_Class::My_Class()
{}

/*****************************************************************************/

/* Public Methods */



/*****************************************************************************/

/* Private Methods */



/*****************************************************************************/

/* Namespace Isolation Close */

} } /* Namespace: mylibs, layout */
