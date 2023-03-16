
#include <stdio.h>
#include "singleton.h"

/**
 * @details This function test the Singleton Class creating 3 pointers to the
 * Singleton element and try to initialize them (force re-init for third ptr).
 * Expected behaviour: The pointers point to the same object and this is only
 * instantiate once at the first pointer request to get it instance. Also, the
 * init() method only happens once, or just when the user requested it by
 * passing "reinit=true", so the init() will only happen for first and third
 * pointers.
 */
int main()
{
    printf("\nApp start\n");

    Singleton* ptr_singleton_1 = Singleton::get_instance();
    Singleton* ptr_singleton_2 = Singleton::get_instance();
    Singleton* ptr_singleton_3 = Singleton::get_instance();

    ptr_singleton_1->init(1, 'A');
    ptr_singleton_2->init(2, 'B');
    ptr_singleton_3->init(3, 'C', true);

    printf("App exit\n\n");

    return 0;
}
