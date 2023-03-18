#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <stdio.h>
#include "size.h"

void enqueue(int n);
int dequeue(void);
int queue_is_empty(void);
int queue_is_full(void);

extern int queue[SIZE];

#endif
