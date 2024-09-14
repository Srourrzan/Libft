#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *node;

    node = malloc(sizeof(t_list));
    if(!node)
        return NULL;
    node->content = content;
    node->next = NULL;
    return node;
}
/*
int main(void)
{
    char    *str;
    t_list  *root;

    str = (char *)malloc(sizeof(char) * 6);
    str = "Razan";
    root = ft_lstnew((void *)str);
    printf("Content of root %s\n", (char *)root->content);
    free(root->content);

}*/