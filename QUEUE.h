#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include "elmType.h"

#define HEAD(q) q.HEAD
#define TAIL(q) q.TAIL

struct Queue
{
    address HEAD;
    address TAIL;
};

// primitive dari Queue

void CreateEmptyQueue (Queue &q);
bool isEmpty2 (Queue q);
void enQueueAddr (Queue &q, address p);
void enQueueElmt (Queue &q, elmType e);
address deQueue (Queue &q);
int gethead (Queue q);
int gettail (Queue q);
char* symHead (Queue q);
char* symTail (Queue q);
void printInfo2 (Queue q);

#endif // QUEUE_H_INCLUDED
