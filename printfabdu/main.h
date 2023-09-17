#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

void print_arg(char type, va_list args, int *count);
int _printf(const char *format, ...);
#endif
