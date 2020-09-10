#ifndef GRAP_H_INCLUDED
#define GRAP_H_INCLUDED
#define Nil NULL
#define info(G) G->info
#define next(G) G->next
#define nextc(G) G->nextc
#define start(G) G.start
#define infoC(G) G->infoC

using namespace std;

typedef string infotype;
typedef struct elmP *adrP;
typedef struct elmC *adrC;

struct elmP
{
    infotype info;
    adrP next;
    adrC nextc;
};

struct elmC
{
    infotype infoC;
    adrC nextc;
};

struct Graph
{
    adrP start;
};

void creategraph (Graph &G);
adrP alokasiP (infotype x);
adrC alokasiC (infotype x);
void connect (Graph &G, adrP p, adrP q);
adrP findparent (Graph G, infotype x);
adrC findchild (Graph G, infotype x);
void disconnect (Graph &G, adrC p, adrC q);
void insertP (Graph &G, adrP p);




#endif // GRAP_H_INCLUDED
