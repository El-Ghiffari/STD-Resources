#include "STACK.h"

void CreateEmptyStack(Stack &s)
{
    TOP(s) = NIL;
}

bool isEmpty(Stack s)
{
    return (TOP(s) == NIL);
}

void PushAdr(Stack &s, address p)
{
    if (TOP(s) == NIL)
    {
        TOP(s) = p;
    }
    else
    {
        NEXT(p) = TOP(s);
        TOP(s) = p;
    }
}

void PushElmt(Stack &s, elmType e)
{
    PushAdr(s, CreateNewElemen1(e));
}

void PushSymbol(Stack &s, char *D)
{
    PushAdr(s, CreateNewElemen3(D));
}

address pop(Stack &s)
{
    address p;
    if (TOP(s) == NIL)
    {
        return NIL;
    }
    else
    {
        p = TOP(s);
        TOP(s) = NEXT(p);
        NEXT(p) = NIL;
        return p;
    }
}

int Peek(Stack s)
{
    return VALUE(TOP(s));
}

void printinfo(Stack s)
{
    address p;
    p = TOP(s);
    while (TOP(s) != NIL)
    {
        cout << SYMBOL(p);
        p = NEXT(p);
    }
}
