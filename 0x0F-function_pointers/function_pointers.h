#include <stddef.h>
#ifndef POINT_H
#define POINT_H
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif