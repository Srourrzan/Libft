/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:03:43 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/02 20:20:20 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*buffer1;
	char		*buffer2;

	buffer1 = (char *)s1;
	buffer2 = (char *)s2;
	i = 0;
	while((*(buffer2 + i) == *(buffer1 + i)) && i < n)
	{
//		printf("i = %ld\n", i);
//		printf("*(buffer1 + i) = %c\n", *(buffer1 + i));
//		printf("*(buffer2 + i) = %c\n", *(buffer2 + i));
		i++;
	}
//	printf("Exit the while loop\n");
//	printf("*(buffer1 + i) = %c\n", *(buffer1 + i));
//	printf("*(buffer2 + i) = %c\n", *(buffer2 + i));
	return (*(buffer1 + i) - *(buffer2 + i));
}
/*
int	main()
{
	char	*str1 = "Razan";
	char	*str2 = "Razan";
	char	*str3 = "razan";
	char	*str4 = "RAzan";
	char	*str5 = "rAzan";
	char	*str6 = "ra6an";
	int	n_bytes = 4;

	printf("The memcmp between %s and %s for the first %d bytes is %d\n", str1, str2, n_bytes, memcmp(str1, str2, n_bytes));
	printf("The memcmp between %s and %s for the first %d bytes is %d\n", str1, str3, n_bytes, memcmp(str1, str3, n_bytes));
        printf("The memcmp between %s and %s for the first %d bytes is %d\n", str1, str4, n_bytes, memcmp(str1, str4, n_bytes));
        printf("The memcmp between %s and %s for the first %d bytes is %d\n", str1, str5, n_bytes, memcmp(str1, str5, n_bytes));
        printf("The memcmp between %s and %s for the first %d bytes is %d\n", str1, str6, n_bytes, memcmp(str1, str6, n_bytes));
        printf("The memcmp between %s and %s for the first %d bytes is %d\n", str3, str6, n_bytes, memcmp(str3, str6, n_bytes));
	printf("=========================\n");
        printf("The memcmp between %s and %s for the first %d bytes is %d\n", str1, str2, n_bytes, ft_memcmp(str1, str2, n_bytes));
        printf("The memcmp between %s and %s for the first %d bytes is %d\n", str1, str3, n_bytes, ft_memcmp(str1, str3, n_bytes));
        printf("The memcmp between %s and %s for the first %d bytes is %d\n", str1, str4, n_bytes, ft_memcmp(str1, str4, n_bytes));
        printf("The memcmp between %s and %s for the first %d bytes is %d\n", str1, str5, n_bytes, ft_memcmp(str1, str5, n_bytes));
        printf("The memcmp between %s and %s for the first %d bytes is %d\n", str1, str6, n_bytes, ft_memcmp(str1, str6, n_bytes));
        printf("The memcmp between %s and %s for the first %d bytes is %d\n", str3, str6, n_bytes, ft_memcmp(str3, str6, n_bytes));

	return (0);
}*/
