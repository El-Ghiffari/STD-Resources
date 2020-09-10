#include "QUEUE.h"

void CreateEmptyQueue(Queue &q)
{
    HEAD(q) = NIL;
    TAIL(q) = NIL;
}

bool isEmpty2(Queue q)
{
    return (HEAD(q) == NIL);
}

void enQueueAddr(Queue &q, address p)
{
    if (HEAD(q) == NIL)
    {
        HEAD(q) = p;
        TAIL(q) = p;
    }
    else
    {
        NEXT(TAIL(q)) = p;
        TAIL(q) = p;
    }
}

void enQueueElmt(Queue &q, elmType e)
{
    enQueueAddr(q, CreateNewElemen1(e));
}

address deQueue(Queue &q)
{
    address p;
    if (HEAD(q) == NIL)
    {
        return NIL;
    }
    else
    {
        p = HEAD(q);
        HEAD(q) = NEXT(p);
        NEXT(p) = NIL;
        return p;
    }
}

int gethead(Queue q)
{
    return VALUE(HEAD(q));
}

int gettail(Queue q)
{
    return VALUE(TAIL(q));
}

char* symHead(Queue q)
{
    return SYMBOL(HEAD(q));
}

char* symTail(Queue q)
{
    return SYMBOL(TAIL(q));
}

void printInfo2(Queue q)
{
    address p;
    p = HEAD(q);
    while (p != NIL)
    {
        cout << SYMBOL(p) << " ";
        p = NEXT(p);
    }
}
