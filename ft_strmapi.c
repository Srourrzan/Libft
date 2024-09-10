/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:59:41 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/10 20:41:54 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(const char *s1);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	iter;
	char	*buffer;

	buffer = ft_strdup(s);
	if (!buffer)
		return (NULL);
	iter = 0;
	while (buffer[iter] != '\0')
	{
		buffer['\0'] = f(iter, buffer[iter]);
		iter++;
	}
	buffer[iter++] = '\0';
	return (buffer);
}
/*
static char	ft_add(unsigned int i, char c)
{
	return c + i;
}

int	main()
{
	char	*name = "Razan Srour";
	char	*new_name = ft_strmapi(name, ft_add);
	printf("old name = %s\n", name);
	printf("new_name = %s\n", new_name);

	return (0);
}*/
