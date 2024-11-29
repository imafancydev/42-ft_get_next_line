<h1 align="center">
	📖 get_next_line
</h1>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/imafancydev/42-ft_get_next_line?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/imafancydev/42-ft_get_next_line?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/imafancydev/42-ft_get_next_line?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/imafancydev/42-ft_get_next_line?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/imafancydev/42-ft_get_next_line?color=green" />
</p>

<p align="center">
	<b><i>Reading a line on a fd is way too tedious</i></b><br>
</p>

## 💡 About the project

> _The aim of this project is to make you code a function that returns a line, read from a file descriptor, utilizing a static 
   variable to salve the bytes read. 
 
 ## 🛠️ Usage

### Requirements

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Using it in your code**

To use the function in your code, simply include its header:

```C
#include "get_next_line.h"
```

and, when compiling your code, add the source files and the required flag:

```shell
get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<size>
```

## 📋 Testing

You only have to edit the get_next_line.c file and uncomment the main function and headers inside it.
You can edit test.txt files to put another text if you wish to test othe cases.
Then simply run this command (change "xx" with desired buffer size) :

```shell
gcc -Wall -Werror -Wextra -D BUFFER_SIZE=xx get_next_line.c get_next_line_utils.c && ./a.out
```

Or you can also use this third party tester to fully test the project

* [Tripouille/gnlTester](https://github.com/Tripouille/gnlTester)
 

  
