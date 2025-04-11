# Libft

This project was developed individually by:

- ipuig-pa

## Project Overview

---

This project involves creating a C library of useful functions that will be used in other C programming projects. The library contains implementations of various standard C library functions, as well as additional functions that will be helpful for string manipulation, memory management, and linked list operations.

## Compilation

---

Compiling the library creates a static library archive file named `libft.a`.

```
[ ]

make        # Compile mandatory parts
make bonus  # Include bonus linked list functions
make clean  # Remove object files
make fclean # Remove object files and library archive
make re     # Recompile everything

```

## Usage

---

After compilation, include the header file in your C projects and link with the library:

```c

#include "libft.h"

int main(void)
{
   //use libft functions in your project
}

```

Compile with:

```
[ ]

cc -Wall -Wextra -Werror -I. -L. -lft your_program.c -o your_program
```

## Features

---

The library is divided into three main parts:

### Part 1: Libc Functions

Re-implementations of standard C library functions, including:

- Character testing functions (`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, etc.)
- String manipulation functions (`ft_strlen`, `ft_strchr`, `ft_strncmp`, etc.)
- Memory manipulation functions (`ft_memset`, `ft_memcpy`, `ft_memmove`, etc.)
- String conversion functions (`ft_atoi`)
- Dynamic memory allocation functions (`ft_calloc`, `ft_strdup`)

### Part 2: Additional Functions

Useful functions that are either not in the standard C library or implemented differently:

- String operations (`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`)
- Number to string conversion (`ft_itoa`)
- Function applications on strings (`ft_strmapi`, `ft_striteri`)
- File descriptor output functions (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`)

### Bonus Part: Linked List Functions

Functions to create and manipulate linked lists:

- Node creation and destruction (`ft_lstnew`, `ft_lstdelone`, `ft_lstclear`)
- List operations (`ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`)
- List iteration  (`ft_lstiter`)
