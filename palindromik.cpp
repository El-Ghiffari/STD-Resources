#include "palindromik.h"
#include <iostream>
#include <string>

using namespace std;

void createstack(Stack &s)
{
    top(s) = NULL;
}

address alokasi(infotype x)
{
    address p;
    p = new elms;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void push(Stack &s, address p)
{
    if (top(s) == NULL)
    {
        top(s) = p;
    }
    else
    {
        next(p) = top(s);
        top(s) = p;
    }
}

void pop (Stack &s, address &p)
{
    if (top(s) == NULL)
    {
        cout << "KOSONG";
    }
    else
    {
        p = top(s);
        top(s) = next(p);
        next(p) = NULL;
    }
}

void printstack(Stack s)
{
    if (top(s) == NULL)
    {
        cout << "STACK KOSONG";
    }
    else
    {
        address p;
        p = top(s);
        while (p != NULL)
            {
                cout << info(p) << " ";
                p = next(p);
            }
    }
}

void cekpalindromik (Stack s, string x)
{
    address p;
    cout << "Masukan Kata : ";
    cin >> x;
    for (int i = 1; i <= x.length(); i++)
    {
        push(s, alokasi(x[i]));
    }
    printstack(s);
    for (int j = 1; j <= x.length(); j++)
    {
        pop(s, p);
        if (x[j] != info(p))
        {
            cout << "Bukan Palindromik";
            break;
        }
    }
}

