#ifndef F_H_INCLUDED
#define F_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

struct Derevo
{   int ves;
    int x;
    Derevo *left ;
    Derevo *right;
};
Derevo* Searchmin(Derevo* root);
void Add(Derevo **u, int &a);
Derevo* ves2(Derevo *root,int &d);
Derevo* Find(Derevo* root,int a);
 Derevo* Delete(Derevo* node, int a);
void show(Derevo *t, int n);


#endif // F_H_INCLUDED
