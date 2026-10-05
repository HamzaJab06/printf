# ft_printf

*This activity has been created as part of the 42 curriculum by hjabarin.*

## Description

The goal of this project is to recreate the `printf()` function from the C standard library.

This project focuses on variadic functions and handling a variable number of arguments.

The mandatory conversions are:

- `%c` - Prints a single character.
- `%s` - Prints a string.
- `%p` - Prints a pointer in hexadecimal format.
- `%d` - Prints a decimal number (base 10).
- `%i` - Prints an integer in base 10.
- `%u` - Prints an unsigned decimal number (base 10).
- `%x` - Prints a number in hexadecimal (base 16) lowercase format.
- `%X` - Prints a number in hexadecimal (base 16) uppercase format.
- `%%` - Prints a percent sign.

## Instructions

Compile the library:

```bash
make
```

This creates:

```text
libftprintf.a
```

Remove object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Rebuild everything:

```bash
make re
```

To use the library in another C program:

```bash
cc main.c libftprintf.a
```

## Algorithm

`ft_printf()` reads the format string character by character.

If the current character is not `%`, it is printed directly.

If the current character is `%`, the next character is checked to determine the required conversion.

The corresponding argument is retrieved using variadic functions.

Each conversion is handled by a helper function. The helper prints the value and returns the number of characters printed.

`ft_printf()` adds these values together and returns the total number of characters printed.

For decimal and hexadecimal numbers, division and modulo are used to extract the digits.

- Decimal numbers use base 10.
- Hexadecimal numbers use base 16.
- `%x` uses lowercase hexadecimal digits.
- `%X` uses uppercase hexadecimal digits.
- `%p` prints the pointer value in hexadecimal format.

## Data Structure

No complex data structure is required for this project.

The main elements used are:

- The format string.
- `va_list` for handling the variable arguments.
- Helper functions for the different conversions.

The project is divided into small functions so that each conversion is handled separately and the code remains simple and reusable.

## Resources

- 42 ft_printf subject
- `man 3 printf`
- `man 3 stdarg`
- C documentation about variadic functions
- Variadic Functions in C geeksforgeeks

### AI Usage

AI was used as a learning and debugging tool during the project.

It was used for:

- Understanding variadic functions and `va_list`.
- Understanding the required conversions.
- Planning the project structure.
- Identifying and testing edge cases.
- Comparing `ft_printf()` with the original `printf()`.
- Understanding and debugging errors during development.
