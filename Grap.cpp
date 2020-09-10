#include "Grap.h"
#include <iostream>

void creategraph(Graph &G)
{
    start(G) = NULL;
}

adrP alokasiP(infotype x);
{
    adrP p;
    p = new elmP;
    info(p) = x;
    next(p) = NULL;
    nextc(p) = NULL;

    return p;
}

adrC alokasiC(infotype x)
{
    adrC p;
    p = new elmC;
    info(p) = x;
    nextc(p) = NULL;

    return p;
}

adrP findparent(Graph G, infotype x)
{
    adrP p;
    p = start(G);
    while ((p != NULL) && (info(p) != x))
    {
        p = next(p);
    }
    if (info(p) != x)
    {
        return NULL;
    }
    else
    {
        return p;
    }
}

adrC findchild(Graph G, infotype x)
{
    adrP p;
    adrC q;
    p = start(G);
    while ((p != NULL) && (info(p) != x))
    {
        q = nextc(p);
        while ((q != NULL) && (infoC(q) != x))
        {
            q = nextc(q);
        }
        p = next(p);
    }
    return q;
}

void connect(Graph &G, adrP p, adrP q)
{
    adrP s,r;
    adrC y,z;
    s = findparent(G, info(p));
    r = findparent(Graph G, info(q));
    y = alokasiC(info(p));
    z = alokasiC(info(q));
    nextc(y) = nextc(r);
    nextc(r) = y;
    nextc(z) = nextc(s);
    nextc(s) = z;
}

void insertP (Graph &G, adrP p);
{
    if (start(G) == NULL)
    {
        start(G) = p;
    }
    else
    {
        next(p) = start(G);
        start(G) = p;
    }
}
