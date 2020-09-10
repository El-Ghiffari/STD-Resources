#include "LIB.h"
#include <cstdio>

void evaluate (Queue &q)
{
    Stack s;
    address p, a, b;
    CreateEmptyStack(s);

    if (!isEmpty2(q))
    {
        p = deQueue(q);
        if (!ISOPERATOR(p))
        {
            PushAdr(s, p);
        }
        else
        {
            a = pop(s);
            b = pop(s);
            int c;
            switch (atoi(SYMBOL(p)))
            {
            case '*' :
                c = VALUE(a) * VALUE(b);
                break;
            case '/' :
                c = VALUE(a) / VALUE(b);
                break;
            case '+' :
                c = VALUE(a) + VALUE(b);
                break;
            case '-' :
                c = VALUE(a) - VALUE(b);
                break;
            }
            char symbol[5];
            sprintf(symbol, "%d", c);
            PushSymbol(s, symbol);
        }
        p = pop(s);
        cout << VALUE(p);
    }

}
