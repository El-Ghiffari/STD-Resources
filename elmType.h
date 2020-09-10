#ifndef ELMTYPE_H_INCLUDED
#define ELMTYPE_H_INCLUDED

#include <cstdlib>
#include <iostream>
using namespace std;

#define NIL 0
#define SYMBOL(P) P->symbol
#define ISOPERATOR(P) P->isOperator
#define NEXT(P) P->Next
#define PRIORITY(P) P->priority
#define VALUE(P) atoi(P->symbol) // cstdlib

typedef struct elmType *address;

struct elmType
{
    bool isOperator;
    char *symbol;
    int priority;
    address next;
};

/*NOTE :
SYMBOL Priority
Operand, = 0
+, - 1
*, / 2
^ 3*/

address CreateNewElemen1 (elmType e);
address CreateNewElemen2 (bool isOperator, char *symbol, int priority);
address CreateNewElemen3 (char *D);

#endif // ELMTYPE_H_INCLUDED
