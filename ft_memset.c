/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:47:43 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/01 18:01:02 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0; 
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}
/*
int	main()
{
	char	str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memeset(): %s\n", str);

	// Fill 8 characters starting from str[13] with '.'
	//ft_memset(str + 13, '.', 8*sizeof(char));
	ft_memset(str + 13, '.', 8*sizeof(char));

	printf("After memset(): %s", str);
	return 0;
}*/
