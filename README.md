<h1 align="center">
	Printf_42 🚀
</h1>

<p align="center">
	<b><i>Variadic arguments are usefull!</i></b>
</p>

<p align="center">
  <img src="https://c.tenor.com/8XHjYF26qQQAAAAC/girl-pixel.gif" display="inline-block" width="40%" height="30%">
</p>

## 💡About

>Summary:
The goal of this project is pretty straightforward. Recode printf().
You will mainly learn about using a variable number of arguments. How cool is that??
It is actually pretty cool :)

### Mandatory

* **format specifiers** - `cspdiuxX%`

**Functions in `ft_printf.c`**

* `ft_printf` (and auxiliary static functions) - Initialization function: start/end variadic arguments functions `<stdarg.h>`; in between that, goes through the input string printing plain characters or collecting + treating format specifiers to the print_specified function, thus printing each occurrance with the corresponding function.

* `print_specified` - Verifies each format specifier and calls functions in accordance with the collected format specifiers.

<i>The following functions output the input variable (collected by `va_arg` function) as a pointer to a string to be printed by the `print_specified` function.</i>

**Functions in `print_alpha.c`**

* `ft_putchar` - **character** (`%c`) type input variable;
* `ft_putstr` - **string** (`%s`) type input variable;

**Functions in `print_numeric.c`**

* `ft_putnbr`	- **int** (`%i` and `%d`) type input variables;
* `ft_puthexa`	- **lower** (`%x`) and **upper hexadecimal** (`%X`) type input variables;
* `ft_putunbr`	- **unsigned int** (`%u`) type input variables;
* `ft_putptr`	- **pointer** (`%p`) type input variable.
