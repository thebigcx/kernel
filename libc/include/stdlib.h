#pragma once

#include "stddef.h"

void* malloc(size_t size);
void free(void* ptr);
char* itoa(int value, char* str, int base);
int abs(int n);