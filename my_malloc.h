#ifndef MY_MALLOC_DEF

#define MY_MALLOC

#include <stddef.h>

void my_malloc_init();
void *my_malloc (size_t size);
void my_free (void *ptr);
void *my_realloc (void *ptr, size_t size);
void print_state();

#endif