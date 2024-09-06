# libft
Libft - 42 Project
Introduction
Libft is the first project at 42 that introduces the fundamentals of coding a custom C library. This library implements a set of standard C library functions, as well as some additional utility functions that are useful for future projects. The goal is to deepen the understanding of low-level programming, memory management, and data structures.

### Project Structure
The project is divided into several sections:

* **Libc Functions:** Re-implementations of standard library functions like memset, bzero, strcpy, etc.
* **Additional Functions:** Useful functions that are not part of libc, such as ft_strjoin, ft_split, and others for manipulating strings, numbers, and memory.
* **Bonus Part:** Functions for working with linked lists, providing practice with dynamic data structures.
Installation
To compile the library, simply run:

```bash
make
```
This will generate the libft.a static library file, which can be linked to any C project.

Usage
Include the library in your project by adding:

```c
#include "libft.h"
```
Then, link the compiled libft.a when compiling your project:

```bash
gcc -Wall -Wextra -Werror -L. -libft your_file.c -o your_program
```

### Contents
Here’s a quick overview of the core functions implemented in this library:

* **Memory functions:** ft_memset, ft_bzero, ft_memcpy, ft_memmove, etc.
* **String manipulation:** ft_strlen, ft_strdup, ft_strjoin, ft_strtrim, etc.
* **Character checks:** ft_isalpha, ft_isdigit, ft_isalnum, etc.
* **List operations (Bonus):** ft_lstnew, ft_lstadd_front, ft_lstsize, etc.

### License
This project is part of the 42 school curriculum and is intended for educational purposes. Feel free to use it for learning, but be mindful of 42’s collaboration policy.

