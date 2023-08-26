/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-elias.abassi
** File description:
** my_printf
*/

#include <stdarg.h>

void my_putchar(char c);
void suite(const char *format, va_list var, int i, int *z);
void suite2(const char *format, va_list var, int i, int *z);
void suite3(const char *format, va_list var, int i, int *z);
void suite4(const char *format, va_list var, int i, int *z);
void suite5(const char *format, va_list var, int i, int *z);
void suite6(const char *format, va_list var, int i, int *z);

int my_printf(const char *format, ...)
{
    va_list var;
    va_start(var, format);
    int z;
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            suite(format, var, i, &z);
            suite2(format, var, i, &z);
            suite3(format, var, i, &z);
            suite4(format, var, i, &z);
            suite5(format, var, i, &z);
            suite5(format, var, i, &z);
            i++;
        }else {
            my_putchar(format[i]);
        }
    va_end(var);
    }
    return (z);
}
