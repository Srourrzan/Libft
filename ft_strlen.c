/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:11:10 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/01 19:11:12 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return length;
}
/*
int	main()
{
	char	src[] = "Razan Srour";

	printf("The length of %s is %ld\n", src, strlen(src));
	printf("The length of %s is %ld\n", src, strlen(src));

	return (0);
}*/
