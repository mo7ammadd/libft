*This activity has been created as part of the 42 curriculum by malnaam.*

# Libft - Your very first own library

## Description
This project is part of the 42 curriculum. C programming can be quite tedious without access to the highly useful standard functions. This activity aims to help understand how these functions work by implementing them from scratch and learning to use them effectively. The goal is to create a personal C library (`libft.a`) containing a collection of general-purpose functions that will be heavily relied upon in future school assignments.

## Library Functions
This library is a recreation of standard libc functions, additional utility functions, and linked list manipulation functions, written strictly in accordance with the 42 Norm. 

### Part 1 - Libc functions
These functions have the same prototypes and implement the same behaviors as the originals, as defined in their `man` pages:
* **Memory functions:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
* **String functions:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
* **Character classification/conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
* **Other:** `ft_atoi`

### Part 2 - Additional functions
These functions are not in the libc, or are part of it but in a different form:
* `ft_substr` - Returns a substring from a string.
* `ft_strjoin` - Concatenates two strings.
* `ft_strtrim` - Trims the beginning and end of a string with a specified set of characters.
* `ft_split` - Splits a string using a character as a delimiter.
* `ft_itoa` - Converts an integer to a string.
* `ft_strmapi` - Applies a function to each character of a string to create a new string.
* `ft_striteri` - Applies a function to each character of a string (modifies the string in-place).
* `ft_putchar_fd` - Outputs a character to a file descriptor.
* `ft_putstr_fd` - Outputs a string to a file descriptor.
* `ft_putendl_fd` - Outputs a string to a file descriptor, followed by a newline.
* `ft_putnbr_fd` - Outputs an integer to a file descriptor.

### Part 3 - Linked list functions
These functions use the `t_list` structure to manipulate singly linked lists:
* `ft_lstnew` - Creates a new list node with the given content.
* `ft_lstadd_front` - Adds a new node at the beginning of a list.
* `ft_lstsize` - Counts the number of nodes in a list.
* `ft_lstlast` - Returns the last node of a list.
* `ft_lstadd_back` - Adds a new node at the end of a list.
* `ft_lstdelone` - Deletes and frees a single node's content and the node itself without freeing the next node.
* `ft_lstclear` - Deletes and frees a given node and all its successors, setting the list pointer to `NULL`.
* `ft_lstiter` - Iterates through a list and applies a function to each node's content.
* `ft_lstmap` - Iterates through a list, applies a function to each node's content, and creates a new list from the results.

## Instructions
To compile and use the library, run the following commands at the root of the repository:
* `make` - Compiles the functions and creates the `libft.a` library.
* `make clean` - Removes the object files (`.o`).
* `make fclean` - Removes the object files and the `libft.a` binary.
* `make re` - Recompiles the entire library from scratch.

To use the library in your code, include the header `#include "libft.h"` and compile your project with `-L. -lft`.

## Resources
* Linux `man` pages (used extensively to understand original function behaviors and edge cases).
* **AI Usage Declaration:** In accordance with the 42 School pedagogical rules, AI tools were used exclusively as an interactive tutor and thought partner. Specifically, AI was used to trace pointer arithmetic line-by-line, explain memory management concepts (like buffer overflows and malloc safety), and visually break down complex logic (e.g., substring matching in `ft_strnstr`). No AI-generation tools were used to directly write or bypass the required reasoning. All logic, implementations, and debugging are strictly my own work.
