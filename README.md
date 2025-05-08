# ft_printf

> [!NOTE]
> Because ft_putnbr() and ft_putstr() aren't enough
>
> The goal of this project is pretty straightforward. You will recode printf().
> You will mainly learn about using a variable number of arguments. How cool is that??
> It is actually pretty cool :)

A custom implementation of the standard C `printf` function.  
This project is part of the 42 Cursus and focuses on understanding formatted output, variadic functions, and low-level string manipulation.

## 📚 Purpose

The goal of `ft_printf` is to rebuild `printf` from scratch, supporting a subset of its format specifiers. This deepens understanding of:

- Variadic arguments via `stdarg.h`
- String and character manipulation
- Buffer management and formatting rules

## ✅ Supported Format Specifiers

`ft_printf` supports the following conversions:

| Specifier | Description                     |
|-----------|---------------------------------|
| `%c`      | Character                       |
| `%s`      | String                          |
| `%p`      | Pointer address (hex format)    |
| `%d` `%i` | Signed decimal integer          |
| `%u`      | Unsigned decimal integer        |
| `%x` `%X` | Unsigned hex (lower/upper case) |
| `%%`      | A literal '%' character         |

## 🧠 Key Features

- No use of the original `printf` or similar standard library functions
- Handles integer and hexadecimal formatting from scratch
- Pointer representation in `0x...` format
- Custom string output with length tracking
- Modular design with separate functions per specifier

## 🔧 How to Build

```bash
make
````

This will compile the static library `libftprintf.a`.

## 🧪 Example Usage

You can test the library by linking it with your own program:

```c
#include "ft_printf.h"

int main(void)
{
    int printed = ft_printf("Hello %s, number: %d\n", "world", 42);
    ft_printf("Printed characters: %d\n", printed);
    return 0;
}
```

Compile and run:

```bash
gcc main.c libftprintf.a
./a.out
```

## 📁 Project Structure

```text
ft_printf/
├── ft_printf.c        // Entry point: dispatcher
├── ft_utils.c         // Helper functions
├── ft_print_c.c       // Handles %c and %%
├── ft_print_s.c       // Handles %s
├── ft_print_p.c       // Handles %p
├── ft_print_d.c       // Handles %d, %i
├── ft_print_u.c       // Handles %u
├── ft_print_x.c       // Handles %x, %X
├── ft_printf.h        // Header with prototypes
├── Makefile
```

## 🧩 Learning Outcomes

- Handling **variadic arguments** (`va_list`, `va_start`, `va_arg`, `va_end`)
- Implementing **format parsing logic**
- Practicing **defensive memory handling** in C
- Deepening understanding of **character output and type casting**
