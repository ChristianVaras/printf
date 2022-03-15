# _printf

## Overview
This repository holds all the code necessary for our custom _printf function to run. Our mini-version currently handles conversion specifiers: c, s, %, d, i and does not yet support field width, precision, flag characters, or length modifiers. In essence, you can print any character, string, integer, or decimal number.

# Table of Contents
- [General Requirements](#general-requirements)
- [Authorized functions and macros](#authorized-functions-and-macros)
- [Compilation](#compilation)
- [Installation](#installation)

## General Requirements
Here are the general requirements:

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags ```-Wall -Werror -Wextra and -pedantic```
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory Your code should use the Betty style. It will be checked using ```betty-style.pl``` and ```betty-doc.pl```
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take - them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called ```holberton.h```
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the ```_putchar``` function for this project

## Authorized functions and macros
- ```write (man 2 write)```
- ```malloc (man 3 malloc)```
- ```free (man 3 free)```
- ```va_start (man 3 va_start)```
- ```va_end (man 3 va_end)```
- ```va_copy (man 3 va_copy)```
- ```va_arg (man 3 va_arg)```

## Compilation
- Your code will be compiled this way: ```$ gcc -Wall -Werror -Wextra -pedantic *.c```
- As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
- Our main files will include your main header file (holberton.h): ```#include holberton.h```
- You might want to look at the gcc flag ```-Wno-format``` when testing with your ```_printf``` and the standard printf.

## Installation
In order to use this custom _printf function you need only ```<unistd.h>``` and ```<stdarg.h>``` library.

First, clone this repository to your local machine:

```
$ git clone https://github.com/narnat/printf.git
```

After cloning the repo, go to the printf folder with:

```
$ cd printf
```

You can compile it with your your C source code with:

```
$ gcc *.c your_C_source_code -o output
```


But the simplest solution is to make it portable, in other words to create a static library:

```
gcc *.c
ar -rc libprintf.a *.o
ranlib libprintf.a
```

Now you will have ```printf.a``` static library, and all you have to do is compile your code with this library:

```
gcc your_C_source_code -L. -lprintf
```
