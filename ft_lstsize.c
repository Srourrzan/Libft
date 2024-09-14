#include "libft.h"

/*
Parameters
----------
        lst:    The beginning of the list.
Return
------
        The length of the list.
Description
-----------
        Counts the number of nodes in a list.
*/
int     ft_lstsize(t_list *lst)
{
    int     counter;

    counter = 0;
    if (lst == NULL)
        return 0;
    while (lst)
    {
        counter++;
        lst = lst->next;
    }
    return counter;
}
/*
int     main()
{
    t_list  *root = ft_lstnew("Razan");
    t_list  *elem1 = ft_lstnew("Srour");

    ft_lstadd_back(&root, elem1);
    printf("NUmber of nodes in the list is %d\n", ft_lstsize(root));
    return 42;
}*/