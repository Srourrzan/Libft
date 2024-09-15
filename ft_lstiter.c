/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:38:06 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/15 21:38:48 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Parameters
----------
        lst: The address of a pointer to a node.
        f: The address of the function used to iterate on the list.
Description
-----------
        Iterates the list 'lst' and applies the function 'f' 
        on the content of each node.
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst->next;
	}
}
/*
void    f(void *content)
{
    content += 1;
}

int     main()
{
    t_list  *root = ft_lstnew("Razan");
    t_list  *elem1 = ft_lstnew("Srour");
    t_list  *elem2 = ft_lstnew("The");

    ft_lstadd_back(&root, elem1);
    ft_lstadd_back(&root, elem2);

    t_list  *curr = root;
    while(curr != NULL)
    {
        printf("%s\n", (char *)curr->content);
        curr = curr->next;
    }

    printf("Applying a function to the list...\n");
    ft_lstiter(root, f);
    curr = root;
    while(curr != NULL)
    {
        printf("%s\n", (char *)curr->content);
        curr = curr->next;
    }

    return 42;
}
*/
