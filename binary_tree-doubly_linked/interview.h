#ifndef INTERVIEW_H
#define INTERVIEW_H
#include <iostream>
#include <fstream>
using namespace std;

typedef struct  s_dll
{
    int             key;
    struct s_dll*   next;
    struct s_dll*   prev;
}               t_s_dll;

typedef struct  s_bst
{
    int             key;
    struct s_bst*   left;
    struct s_bst*   right;
}               t_s_bst;

t_s_bst*        txt_to_bst();
void            print_inorder_bst(t_s_bst* bst);
void            bst_to_dll(t_s_bst* bst, t_s_dll** ref);
void            print_dll(t_s_dll* dll);
#endif