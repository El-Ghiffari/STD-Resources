#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "elmType.h"
#define TOP(S) S.Top

struct Stack
{
    address Top;
};

//primitive dari stack
void CreateEmptyStack(Stack &s);
bool isEmpty (Stack s);
void PushAdr (Stack &s, address p);
void PushElmt (Stack &s, elmType e);
void PushSymbol (Stack &s, char *D);
address pop (Stack &s);
int Peek (Stack s);
char *symPeek (Stack s);
void printinfo (Stack s);

#endif // STACK_H_INCLUDED
