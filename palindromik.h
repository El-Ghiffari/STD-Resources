#ifndef PALINDROMIK_H_INCLUDED
#define PALINDROMIK_H_INCLUDED
#define Nil NULL;
#define top(s) (s).top
#define next(s) (s)->next
#define info(s) (s)->info
#include <string>

typedef char infotype;
typedef struct elms *address;

struct elms
{
    address next;
    infotype info;
};

struct Stack
{
    address top;
};

void createstack (Stack s);
void push (Stack &s, address p);
void pop (Stack &s, address &p);
address alokasi (infotype x);
void printstack (Stack s);
void cekpalindromik (Stack s, string x);

#endif // PALINDROMIK_H_INCLUDED
