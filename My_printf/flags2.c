/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-elias.abassi
** File description:
** flags2
*/

#include <stdarg.h>

void my_putchar(char c);
int my_putstr(char *str);
int my_strlen(char *str);
int my_intlen(int z);
int	my_put_nbr(int nb);
int	my_put_nbr_long(int nb);
int my_put_nbr_princ(unsigned long nbr, char const *princ);
int my_put_float2(double nbr);
void convert_scientific(double dec, int maj);
double neg (int a);

void suite6(const char *format, va_list var, int i, int *z)
{
    int c = 0;
    if (format[i + 1] == 'F') {
        double a = va_arg(var, double);
        if (a < 0){
            my_put_float2(neg(a));
            c = my_intlen(a);
            *z = c;
        }else{
            my_put_float2(a);
            c = my_intlen(a);
            *z = c;
        }
    }
}
