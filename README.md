<p align="center">
  <img src="https://raw.githubusercontent.com/xSilverWasHere/42-project-badges/refs/heads/main/covers/cover-libft.png" alt="LIBFT"/>
</p>

# 🧩 Libft – Your First C Library

Welcome to **Libft**, my foundational project at 42 School. The goal of this project is to code a personal C library by reimplementing standard functions from the C library and creating additional utility functions. This library serves as a toolbox that can be reused in future projects throughout the 42 cursus.

---

## 📚 Project Overview

**Objective:**  
Recreate essential functions from the standard C library (libc), and build complementary utility functions to form a cohesive and reliable personal library.

**Language:** C

**Deliverable:**  
A static library file `libft.a` including all implemented functions, a `libft.h` header, and a compliant `Makefile`.

---

## 📦 Contents

### ✅ Mandatory Part

#### 🧱 Libc Functions (Part 1)

Functions reimplemented from `libc`, all prefixed with `ft_`, such as:
- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, ...
- String/memory operations: `ft_strlen`, `ft_memcpy`, `ft_memset`, ...
- Utility functions: `ft_atoi`, `ft_strdup`, `ft_calloc`, ...

#### 🧰 Additional Functions (Part 2)

Custom string handling and conversion functions:
- `ft_substr`, `ft_strjoin`, `ft_strtrim`
- `ft_split`, `ft_itoa`
- Function iterators: `ft_strmapi`, `ft_striteri`
- File descriptor outputs: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

#### ⚙️ Build & Usage

**Compile the library**

>$ make

**Clean object files**

>$ make clean

**Remove all generated files**

>$ make fclean

**Rebuild the library from scratch**

>$ make re

#### 🎯 What I Learned

This project provided an in-depth understanding of:

  - Low-level memory management (allocation, copying, clearing)
  - handling edge cases and avoiding segmentation faults
  - Writing clean and reusable code
  - Adhering to a coding standard (Norminette)
  - Designing and building a custom Makefile
