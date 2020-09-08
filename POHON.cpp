#include <iostream>
#include "POHON.h"

using namespace std;

void createtree(binarytree &T)
{
    root(T) = NULL;
}

address allocate(char x)
{
    address p;
    p = new node;
    info(p) = x;
    left(p) = NULL;
    right(p) = NULL;

    return p;
}

void insertroot(binarytree &T, address N)
{
    root(T) = N;
    left(N) = NULL;
    right(N) = NULL;
}

void insertLeft(binarytree &T, address parent, address left)
{
	left(parent) = left;
}

void insertRight(binarytree &T, address parent, address right)
{
	right(parent) = right;
}

void getSibling(binarytree T, address R, address N)
{
	address P;
	P = R;
	if (P != NULL) {
		if (left(P) == N) {
			P = right(P);
			cout << info(P);
		}
		else if (right(P) == N) {
			P = left(P);
			cout << info(P);
		}
			getSibling(T, left(P), N);
			getSibling(T, right(P), N);
	}
}

void getParent(binarytree T, address R, address N)
{
	address P;
	P = R;
	if (P != NULL) {
	if ((left(P) == N)||(right(P) == N)) {
		cout << info(P);
	}

			getParent(T, left(P), N);
			getParent(T, right(P), N);
	}

}

bool isleaf(binarytree T, address N)
{
    return ((left(N)==NULL) && (right(N)==NULL));
}

bool isinternalnode(binarytree T, address N)
{
    return (!isleaf(T, N));
}

int treeHeight(binarytree T, address P)
{
	if (P == NULL) {
		return -1;
	}
	else {
		int u = treeHeight(T, left(P)), v = treeHeight(T, right(P));
		if (u > v) {
			return u + 1;
		}
		else {
			return v + 1;
		}
	}
}

void printDescendantNode(binarytree T, address N)
{
	if (N != NULL) {
		cout << info(N) << "-";
		printDescendantNode(T, left(N));
		printDescendantNode(T, right(N));
	}
}
