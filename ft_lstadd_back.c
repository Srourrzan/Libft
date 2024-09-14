#include "libft.h"

/*
Parameters: lst: The address of a pointer to the first link of a list.
            new: The address of a pointer to the node to be added to the list.

Description: Adds the node `new` at the end of the list
*/
void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list*     curr;

    if(!new)
        return;
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    curr = *lst;
    while (curr->next != NULL)
    {
        //printf("current node: %s\n", (char *)curr->content);
        curr = curr->next;
    }
    curr->next = new;
}
/*
int     main(void)
{
    t_list  *org_list = NULL;
    t_list  *new_list;

    new_list = ft_lstnew("Razan");
    ft_lstadd_back(&org_list, new_list);

    t_list *curr = org_list;
    while (curr != NULL)
    {
        printf("%s\n", (char *)curr->content);
        curr = curr->next;
    }
    return 42;
    
}*/