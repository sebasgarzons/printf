👋 Hello Devs
# PrintF

Hello and Welcome to our Holberton PrintF project.
In this repository you will find our own printf, developed by software developers in progress.

For those who do not know, the printf function is the function used in C and other programming languages to "print" a value on the screen, according to the criteria and arguments passed by the program.

For a more specific explanation, we invite you to see our manual: PrintF

<h2>
Features
</h2>

- Developed in  WSL  20.04 LTS
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- There is not allowed global variables
- No more than 5 functions per file
- The prototypes of all your functions should be included in your header file called holberton.h
- Your code should use the Betty style. For more info: [Betty](https://github.com/holbertonschool/Betty)
- ___Our work is still in development:___
<h3 class="title_fnctns">
Functions:
</h3>
- [x] Type char
- [x] Type string
- [x] Type percent
- [x] Type decimal, base 10
- [x] Type integer, base 10
- [ ] Type binary
- [x] Type unsigned decimal, base 10
- [ ] Type octal
- [x] Type hexadecimal, base 16
- [x] Type reverse string
- [ ] Type Rot13


[TOCM]
#Compilation and Execution
Para poder correr el programa es tan sencillo como compilarlo en la terminal con las siguientes banderas: 
> gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

If you wish, you can optimize this process by creating an alias in the terminal to summarize all the flags and steps in a single command (Note, in the following command you are also running the compiled program, and also proceed to delete the executable to leave the folder as clean as possible).

> alias cplpf="gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf ; ./printf ; rm ./printf"

#How this work:

####Main Function
> int _printf(const char *format, ...);

### Subfunctions
They are those that print to the standard output, according to the format specified in the % parameter.

So, for example: if the parameter is %c, then the program will look for the function "printf_c" and print a character.
```
int main (void)
{
	_printf("Character: [%c]\n", 'H')
}
```
The output will be:
>Character:[H]

And if the parameter is %s, then the program will look for the function "printf_s" and print a string.
```
int main (void)
{
	char *str = "I am a string !";
	_printf("String:[%s]\n", str);
}
```

The output will be:
>String:[I am a string !]

####Correspondence table

| Function  | Symbol  | Description |
| :------ |:---------------:| -----:|
| `printf_s`      | %s | Prints a string |
| `printf_c`      | %c  |   Prints a character |
| `printf_d`   | %d   |   Prints in decimal format |
| `printf_i`      |%i  |   Prints a integer |
| `printf_per`      | %per |   Prints in percentage format |
| `printf_bin`     | %bin |   Prints in binary type |
| `printf_o`      | %o |   Prints in octal type |
| `printf_x`      | %x |   Prints in hexadecimal format |
| `printf_u`     | %u |   Prints in unsigned decimal format |
| `printf_R`     | %R |   Prints in ROT13 format |
| `printf_r`     | %r |   Prints a string in reverse |
                
----

### Aux Functions:

#####int _putchar(char c);
#####int _strlen(char *s);
#####char *_itoa(int i, char *strout, int base);
#####void _print_rev_recursion(char *s);

### Edge Cases










`$ npm install marked`





###FlowChart
Image:

![](https://pandao.github.io/editor.md/examples/images/4.jpg)

> Follow your heart.

![](https://pandao.github.io/editor.md/examples/images/8.jpg)

> 图为：厦门白城沙滩 Xiamen

图片加链接 (Image + Link)：

[![](https://pandao.github.io/editor.md/examples/images/7.jpg)](https://pandao.github.io/editor.md/examples/images/7.jpg "李健首张专辑《似水流年》封面")

> 图为：李健首张专辑《似水流年》封面
                
----


###End
