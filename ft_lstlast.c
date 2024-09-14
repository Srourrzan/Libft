#include "libft.h"

/*
Parameters
----------
        lst: The beginning of the list.
Return
------
        Last node of the list.
Description
-----------
        Returns the last node of the list.
*/
t_list *ft_lstlast(t_list *lst)
{
    t_list      *last;

    if (lst == NULL)
        return;

    //printf("Starting node: %s\n", (char *)lst->content);
    while (lst)
    {
        last = lst;
        lst = lst -> next;
        // if (lst)
    //        printf("Current node after moving one node: %s\n", (char *)lst->content);
    //    printf("The value of last = %s\n", (char *)last->content);
    }
    return (last);
}
/*
int     main()
{
    t_list  *root = ft_lstnew("Razan");
    t_list  *elem1 = ft_lstnew("Srour");
    t_list  *elem2 = ft_lstnew("The");

    ft_lstadd_back(&root, elem1);
    ft_lstadd_back(&root, elem2);

    printf("NUmber of nodes in the list is %d\n", ft_lstsize(root));
    t_list *last_element = ft_lstlast(root);
    printf("The last node in the list is %s\n", (char *)last_element->content);
    return 42;
}*/