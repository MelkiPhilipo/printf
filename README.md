0x11. C - printf
This is ateam project on printf

0. Handle conversion specifiers( c, s, %)
c - character type
s-  string type
% - handle it as a percentage

1. Handle conversion specifiers(d, i)
d, i- are int types

2. Handle conversion specifier(b)
b- used as a custom implementation to print an unsigned int in binary format

3. Handle conversion specifiers(u, o, x, X)
u - prints unsigned decimal integer
o - prints unsigned integer in octal
x - prints unsigned integer in lowercase hexadecimal
X - prints unsigned integer in uppercase hexadecimal

4. local buffer of 1024 chars in order to call write as little as possible.

5. Handle non-printable characters  (0 < ASCII value < 32 or >= 127)

6. Handle conversion specifier (p)
p- prints pointer value in hexadecimal format

7. Handle flag characters
+ - add +sign before positive numbers
'' - to add space characters before positive values
# - to ensure decimal point has been placed

8. To handle length modifiers (l, h)
l - specifies that the argument is long int or unsigned long int when used with (d, i, o, u, x, X)
h - specifies that the argument is short int or unsigned short int when used with (d, i, o, u, x, X)
9. Handle field width
It represents the minimum number of characters to be printed for the corresponding argument.

10. Handle precisions
Used for floating-point numbers to specify yhe number of decimal points to be printed

11. Handle flag character
0 - a numeric format specifier used to prefix zero's

12. Handle flag character
- -specifies the converted value to left justification

13. Handle conversion specifier
r - to print reverse string

14. Handle conversion specifier
R- Prints the rot13'ed string

15.options to work well:


