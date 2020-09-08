#ifndef POHON_H_INCLUDED
#define POHON_H_INCLUDED
#define Nil NULL
#define root(t) t.root
#define left(p) p->left
#define right(p) p->right
#define info(p) p->info

typedef struct node *address;

struct node
{
    char info;
    address left;
    address right;
};

struct binarytree
{
    address root;
};

void createtree (binarytree &T);
address allocate (char x);
void insertroot (binarytree &T, address N);
void insertLeft (binarytree &T, address parent, address left);
void insertRight (binarytree &T, address parent, address right);
void getSibling (binarytree T, address R, address N);
void getParent (binarytree T, address R, address N);
bool isleaf (binarytree T, address N);
bool isinternalnode (binarytree T, address N);
int treeHeight (binarytree T);
void printDescendantNode (binarytree T, address c, address N);

#endif // POHON_H_INCLUDED
