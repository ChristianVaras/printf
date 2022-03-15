# _printf

## Overview
This repository holds all the code necessary for our custom _printf function to run. Our mini-version currently handles conversion specifiers: c, s, %, d, i and does not yet support field width, precision, flag characters, or length modifiers. In essence, you can print any character, string, integer, or decimal number.
Prototype: int _printf(const char *, ...);


# Table of Contents
- [General Requirements](#general-requirements)
- [Authorized functions and macros](#authorized-functions-and-macros)
- [Compilation](#compilation)
- [Installation](#installation)
- [Format Specifiers](#format-specifiers)
- [Tasks](#tasks)
- [Some Examples](#some-examples)
- [Authors](#authors)

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
$ git clone https://github.com/ChristianVaras/printf.git
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

## Format Specifiers
Function name | Description | Format Specifier
--- | --- | ---
`print_char` | Prints a character | `%c`
`print_string` | Prints a string | `%s`
`print_percentage` | Prints a '%' | `%%`
`print_integer` | Prints an integer | `%d` or `%i`


## Tasks

### Mandatory Tasks
- [x] Write function that produces output with conversion specifiers ```c```, ```s```, and ```%```.
- [ ] Handle conversion specifiers ```d```, ```i```.
- [x] Create a man page for your function.

### Advanced Tasks
- [ ] Handle conversion specifier ```b```.
- [ ] Handle conversion specifiers ```u```, ```o```, ```x```, ```X```.
- [ ] Use a local buffer of 1024 chars in order to call write as little as possible.
- [ ] Handle conversion specifier ```S```.
- [ ] Handle conversion specifier ```p```.
- [ ] Handle flag characters ```+```, space, and ```#``` for non-custom conversion specifiers.
- [ ] Handle length modifiers ```l``` and ```h``` for non-custom conversion specifiers.
- [ ] Handle the field width for non-custom conversion specifiers.
- [ ] Handle the precision for non-custom conversion specifiers.
- [ ] Handle the ```0``` flag character for non-custom conversion specifiers.
- [ ] Handle the custom conversion specifier ```r``` that prints the reversed string.
- [ ] Handle the custom conversion specifier ```R``` that prints the rot13'ed string.
- [ ] All above options should work well together.

## Some Examples


**Character**
* Input: ```_printf("The last letter of the alphabet is %c\n", 'Z');```
* Output: ```The last letter of the alphabet is Z```

**String**
* Input: ```_printf("%s\n", "This is a simple string.");```
* Output: ```This is a simple string.```

**Integer or Decimal**
* Input: ```_printf("I've %i years old\n", 16);```
* Output: ```I've 16 years old```

**Percentage**
* Input: ```_printf("I got 100%% of the profit.\n");```
* Output: ```I got 100%% of the profit.```


## Authors
- [Mauricio Carrasco](https://github.com/mauricodev) ~ [Linkedin](https://www.linkedin.com/in/mauriciocm69/) ~ [@mauricodev](https://twitter.com/mauricodev)
- [Christian Varas](https://github.com/ChristianVaras) ~ [LinkedIn](https://www.linkedin.com/in/arthur-damm-96527042/) ~ [@arthurdamm](https://twitter.com/ChristianVaras8)
