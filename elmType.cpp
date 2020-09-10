#include <iostream>
#include "elmType.h"
#include <cstdio>

address CreateNewElemen1(elmType e)
{
    address p;
    p = new elmType;
    ISOPERATOR(p) = e.isOperator;
    SYMBOL(p) = e.symbol;
    PRIORITY(p) = e.priority;
    NEXT(p) = NIL;

    return p;
}

address CreateNewElemen2(bool isOperator, char *symbol, int priority)
{
    elmType e;
    e.isOperator = isOperator;
    e.symbol = symbol;
    e.priority = priority;
    e.next = NIL;

    return CreateNewElemen1(e);
}

address CreateNewElemen3(char *D)
{
    elmType e;
    e.isOperator = false;
    e.symbol = D;
    e.priority = 0;
    e.next = NIL;

    return CreateNewElemen1(e);
}

