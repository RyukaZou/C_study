Chap 1 related
# Coding style
# To compile C code
## code structure and key words
## the code you literally seeing
## the definition in preprocessor, and where to find them
## where to find documents?
# Examples
## Working with OS
### return value to OS (return_value.c)
### arguments from OS (arguments.c)
### what does OS really do while you are running a program (ldd, strace)


Chap 2 related
# How to show results in C (printf.c)
# Basic type in C
## bool
## char
## int/short/long
## float/double
## enum (enum.c)
## union (union.c)
## const/volatile/restrict
# scope and lifetime (global_variable_XX.c)
# alignment (alignment.c)
# array (array.c)
# pointer (pointer_char.c pointer_int.c)
# struct (struct.c)
# object, function, type, pointer.

Chap 3 
# ARITHMETIC TYPES
## the detail of [signed/unsigned] char, short, int, long, long long
### the range and arrangement of signed/unsigned integer 
## the detail of float and double
### 32bit (1 + 8 + 23), 64bit (1 + 11 + 52)
## Boeing 787 reboot every 248days (guess 2^31 * 100s)
## Hacker News website down (SSD)
## https://www.phoronix.com/scan.php?page=news_item&px=Linux-Kernel-Faster-memchr
## limit
### (sum + ui > UINT_MAX) v.s. (ui > UINT_MAX - sum)
## decimal, octal (0???), hexadecimal (0x???)
## Integer Promotions (overflow.c)