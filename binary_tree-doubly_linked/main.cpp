#include "interview.h"

int main()
{
    t_s_dll*    dll = NULL;
    bst_to_dll(txt_to_bst(), &dll);
    print_dll(dll);
    return 0;
}