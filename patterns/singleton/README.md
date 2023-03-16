# Singleton

This project implements a Singleton Software Pattern for a C++ class focus on embedded software.

## Features

- It ensures that the object of the class can only be instantiate once, allowing to get it instance from outside.

- The singleton object will be instantiate as static memory, by using a "placement new" operator with a compile-time reserved memory on BSS section.

## Build

A Makefile is provided to build the project.

Simply run make to build it:

```bash
make
```

The output binary, named as "my_app", will be placed inside a "bin" directory, and also copied to project root location.
