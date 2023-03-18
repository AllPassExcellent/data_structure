#ifndef __STACK_H__
#define __STACK_H__

#include <stdio.h>
#include "size.h"

extern int stack[SIZE];
extern int top;

void push(int c);
int pop(void);
int stack_is_empty(void);

#endif
