<div align="center">
# PISCINE RELOADED

### Back to the fundamentals of C

**42 Madrid · C programming · Shell · Algorithms**

![Language](https://img.shields.io/badge/language-C-00599C?style=flat-square&logo=c&logoColor=white)
![Shell](https://img.shields.io/badge/shell-sh-4EAA25?style=flat-square&logo=gnubash&logoColor=white)
![School](https://img.shields.io/badge/school-42-000000?style=flat-square)
![Status](https://img.shields.io/badge/status-finished-4EAA25?style=flat-square)

*A collection of exercises to revisit the foundations of programming after the 42 Piscine.*

[Overview](#overview) · [Exercises](#exercises) · [Getting started](#getting-started) · [Code examples](#code-examples) · [Resources](#resources)

</div>

---

## Overview

**Piscine Reloaded** is a set of 28 exercises from the 42 curriculum, designed to reinforce essential skills learned during the C Piscine. It revisits command-line tools, file permissions, basic C syntax, pointers, strings, memory allocation, recursion, and Makefiles.

The emphasis is on understanding the fundamentals through small, focused implementations.


## Exercises

The official subject spans `ex00`–`ex27`. The topics below describe the **assignment**, not the completion status of every exercise in this repository.

| Exercises | Topics | Examples |
| :--- | :--- | :--- |
| `ex00`–`ex05` | Shell and filesystem | Permissions, symbolic links, `find`, file names |
| `ex06`–`ex09` | First C functions | Characters, numbers, integer pointers |
| `ex10`–`ex13` | Pointers and arithmetic | Swapping integers, division, factorials |
| `ex14`–`ex17` | Numbers and strings | Square root, printing, length, comparison |
| `ex18`–`ex19` | Command-line arguments | Printing and sorting arguments |
| `ex20`–`ex21` | Dynamic memory | String duplication, integer ranges |
| `ex22`–`ex23` | Header files | Macros and structures |
| `ex24` | Build automation | `Makefile`, `all`, `clean`, `fclean`, `re` |
| `ex25`–`ex26` | Function pointers | Iteration and predicates |
| `ex27` | File I/O | Reading and displaying file contents |

<details>
<summary><strong>Functions included in the provided source files</strong></summary>

| File | Prototype | Purpose |
| :--- | :--- | :--- |
| `ft_swap.c` | `void ft_swap(int *a, int *b);` | Exchanges the values of two integers through pointers. |
| `ft_recursive_factorial.c` | `int ft_recursive_factorial(int nb);` | Calculates a factorial recursively; returns `0` for negative inputs. |

</details>

## Code examples

### Swapping values with pointers

```c
void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
```

`ft_swap` takes the addresses of two integers and changes the values stored at those addresses.

### Computing a factorial recursively

```c
int ft_recursive_factorial(int nb)
{
    int num;

    if (nb < 0)
        return (0);
    if (nb <= 1)
        return (1);
    num = nb * ft_recursive_factorial(nb - 1);
    if (num > 0)
        return (num);
    return (0);
}
```

The recursive function uses `0! = 1` as a base case and reduces a positive input through `nb * (nb - 1)!`.

## Project guidelines

The original subject requires:

- Following the 42 Norm and checking code with `norminette`.
- Compiling C code with `cc -Wall -Wextra -Werror`.

## Resources

- [42 School](https://42.fr/en/homepage/)
---

<div align="center">

**Practice · Understand · Improve**

*Part of my programming journey at 42 Madrid.*

</div>
