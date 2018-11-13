#include "interview.h"

void            print_inorder_bst(t_s_bst* bst)
{
    if (bst != NULL)
    {
        print_inorder_bst(bst->left);
        cout << bst->key << " ";
        print_inorder_bst(bst->right);
    }
    cout << endl;
}

t_s_bst*        new_node_bst(int key)
{
    t_s_bst*    node;
    
    node = new t_s_bst;
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    
    return node;
}

t_s_bst*        insert_bst(t_s_bst* bst, int key)
{
    if (bst == NULL)
        return new_node_bst(key);
    
    if (key < bst->key)
        bst->left = insert_bst(bst->left, key);
    else if (key >= bst->key)
        bst->right = insert_bst(bst->right, key);
        
    return bst;
}

t_s_bst*        txt_to_bst()
{
    t_s_bst* bst = NULL;
    ifstream file("numbers.txt");
    int n;
    
    while (file >> n)
        bst = insert_bst(bst, n);
    return bst;
}