/**
 * @file    singleton.h
 * @author  Author Name
 * @date    yyyy.mm.dd
 * @version 1.0.0
 * @brief   Brief description of the component.
 */

/*****************************************************************************/

/* Include Guards Open */

#ifndef SINGLETON_H
#define SINGLETON_H

/*****************************************************************************/

/* Libraries */


/*****************************************************************************/

/* Class Interface */

class Singleton
{
    /******************************************************************/

    /* Private Constants */

    private:



    /******************************************************************/

    /* Public Constants */

    public:



    /******************************************************************/

    /* Private Data Types */

    private:



    /******************************************************************/

    /* Public Data Types */

    public:



    /******************************************************************/

    /* Public Methods */

    public:

        /**
         * @brief Get the Singleton object instance (Instantiate if needed).
         * Note: This must be a static function.
         * @return Singleton* Current Singleton Object instance.
         */
        static Singleton* get_instance();

        /**
         * @brief Initialize the component.
         * @param var1 A needed initialization value for an attribute.
         * @param var2 A needed initialization value for an attribute.
         * @param reinit Request to force a re-initialization (by default the
         * function deny and returns false if was already initialized).
         * @return true Initialization success.
         * @return false Initialization fail.
         */
        bool init(const int var1, const char var2, const bool reinit=false);

        /**
         * @brief Run an iteration of the component main behaviour.
         * @return true Component process ok.
         * @return false Component process fail.
         */
        bool process();

    /******************************************************************/

    /* Private Methods */

    private:

        /**
         * @brief Singleton Class Constructor (must be private).
         */
        Singleton();

    /******************************************************************/

    /* Public Attributes */

    public:



    /******************************************************************/

    /* Private Attributes */

    private:

        /**
         * @brief Static pointer to Singleton Object instance.
         */
        static Singleton* instance;

        /**
         * @brief Component initialization status (to be set to true if the
         * init() method has been called).
         */
        bool initialized;

        /**
         * @brief Some attribute.
         */
        int my_var1;

        /**
         * @brief Another attribute.
         */
        char my_var2;

    /******************************************************************/
};

/*****************************************************************************/

/* Include Guards Close */

#endif /* SINGLETON_H */
