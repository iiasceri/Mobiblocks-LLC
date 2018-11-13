#include "interview.h"

void            print_dll(t_s_dll* dll)
{
    while (dll != NULL)
    {
        cout << dll->key << " ";
        dll = dll->next;
    }
    cout << endl;
}

void            append_dll(t_s_dll** ref, int key)
{
    t_s_dll*    tmp = new t_s_dll;
    t_s_dll*    last = *ref;
    
    tmp->key = key;
    tmp->next = NULL;
    
    if (*ref == NULL)
    {
        tmp->prev = NULL;
        *ref = tmp;
        return;
    }
    
    while (last->next != NULL)
        last = last->next;
    
    last->next = tmp;
    tmp->prev = last;
}

void            bst_to_dll(t_s_bst* bst, t_s_dll** ref)
{
    if (bst != NULL)
    {
        bst_to_dll(bst->left, ref);
        append_dll(ref, bst->key);
        bst_to_dll(bst->right, ref);
    }    
}