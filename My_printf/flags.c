/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-elias.abassi
** File description:
** flags
*/

#include <stdarg.h>

void my_putchar(char c);
int my_putstr(char *str);
int my_strlen(char *str);
int my_intlen(int z);
int	my_put_nbr(int nb);
int	my_put_nbr_long(int nb);
int my_put_nbr_princ(unsigned long nbr, char const *princ);
int my_put_float(double nbr);
void convert_scientific(double dec, int maj);
double neg (int a);

void suite(const char *format, va_list var, int i, int *z)
{
    int c = 0;
    if (format[i + 1] == 'd' || format[i + 1] == 'i') {
        int a = va_arg(var, int);
        my_put_nbr(a);
        c = my_intlen(a);
        *z = c;
    }
    if (format[i + 1] == 's') {
        char *a = va_arg(var, char *);
        my_putstr(a);
        c = my_strlen(a);
        *z = c;
    }
    if (format[i + 1] == 'c') {
        int a = va_arg(var, int);
        my_putchar(a);
        c = my_intlen(a);
        *z = c;
    }
}

void suite2(const char *format, va_list var, int i, int *z)
{
    int c = 0;
    if (format[i + 1] == 'f') {
        double a = va_arg(var, double);
        if (a < 0){
            my_put_float(neg(a));
            c = my_intlen(a);
            *z = c;
        }else{
            my_put_float(a);
            c = my_intlen(a);
            *z = c;
        }
    }
    if (format[i + 1] == 'o') {
        int a = va_arg(var, unsigned int);
        my_put_nbr_princ(a, "01234567");
        c = my_intlen(a);
        *z = c;
    }
}

void suite3(const char *format, va_list var, int i, int *z)
{
    int c = 0;
    if (format[i + 1] == 'u') {
        long long a = va_arg(var, long long);
        long long b = -4294967296;
        if (a < 0){
            a = a + b;
            my_put_nbr_long(a);
            c = my_intlen(a);
            *z = c;
        } else {
            my_put_nbr_long(a);
            c = my_intlen(a);
            *z = c;
        }
    }
    if (format[i + 1] == 'n') {
        int a = va_arg(var, int);
        a = *z;
    }
}

void suite4(const char *format, va_list var, int i, int *z)
{
    int c = 0;
    if (format[i + 1] == 'X') {
        int a = va_arg(var, unsigned int);
        my_put_nbr_princ(a, "0123456789ABCDEF");
        c = my_intlen(a);
        *z = c;
    }
    if (format[i + 1] == 'x') {
        int a = va_arg(var, unsigned int);
        my_put_nbr_princ(a, "0123456789abcdef");
        c = my_intlen(a);
        *z = c;
    }
    if (format[i + 1] == 'z' || format[i + 1] == 't' || format[i + 1] == 'q' ||
    format[i + 1] == 'h' || format[i + 1] == 'j') {
        my_putchar('%');
        c = 1;
        *z = c;
    }
}

void suite5(const char *format, va_list var, int i, int *z)
{
    int c = 0;
    if (format[i + 1] == 'm') {
        my_putstr("Success");
        c = 7;
        *z = c;
    }
    if (format[i + 1] == 'r' || format[i + 1] == 'y' || format[i + 1] == 'k' ||
    format[i + 1] == 'w' || format[i + 1] == 'v' || format[i + 1] == ',') {
        char a = format[i + 1];
        my_putchar('%');
        my_putchar(a);
        c = 2;
        *z = c;
    }
    if (format[i + 1] == 'b') {
        my_put_nbr_princ(va_arg(var, unsigned int), "01");
        c = my_intlen(my_put_nbr_princ(va_arg(var, unsigned int), "01"));
        *z = c;
    }
}
