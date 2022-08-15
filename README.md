# PROJECT _PRINTF FUNCTION 
# _printf(). Repository: printf
_printf is a function to do formatted printing. In this program we develop the function for simple printing and the format specificatrions printing.

Depending of the content in the (), this functions use the simple printing or the use or specifiers.

In this project we made the tasks 0 - 2 of mandatory part, and the 14 advanced tasks. The first task develop the function as such, only with the c, s and % specifiers. Then, the next task, add more specifiers.

We used a principal function called _printf() for give the string or specifiers to other function called check_format. In this second function search wich specifier is and and send it to other funtion that prints the correspondent argument. For understand how it works we can use this flow chart.

The project consists of normal functions, derived functions a man page and a README.md file.

This produces output according to a format specifiers,as shown below.

_printf("Length:[%d, %i]\n", len, len);

printf("Length:[%d, %i]\n", len2, len2);

_printf("Negative:[%d]\n", -762534);

printf("Negative:[%d]\n", -762534);

_printf("Unsigned:[%u]\n", ui);

printf("Unsigned:[%u]\n", ui);

_printf("Unsigned octal:[%o]\n", ui);

printf("Unsigned octal:[%o]\n", ui);

_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

_printf("Character:[%c]\n", 'H');

printf("Character:[%c]\n", 'H');

_printf("String:[%s]\n", "I am a string !");

printf("String:[%s]\n", "I am a string !");

_printf("Address:[%p]\n", addr);

printf("Address:[%p]\n", addr);

len = _printf("Percent:[%%]\n");

len2 = printf("Percent:[%%]\n");

_printf("Len:[%d]\n", len);

printf("Len:[%d]\n", len2);

_printf("Unknown:[%r]\n");

# THis printf function was developed by samuel from ALX cohort 7.
