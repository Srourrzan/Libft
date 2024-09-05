/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:07:36 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/01 14:18:08 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = (int) ft_strlen(s);
	while (index >= 0)
	{
		if (s[index] == (unsigned char)c)
			return ((char *)s + index);
		index--;
	}
	return (NULL);
}
/*
int	main()
{
	const char	src[] = "Ismail Alamir";
	char	char1 = 'i';
	char	char2 = 'l';
	int	char3 = 'A';
	int	num1 = '0';
	int	num2 = ' ';
	int	num3 = 4;

	printf("The last occurance of %c in %s is %s\n", char1, src, strrchr(src, char1));
	printf("The last occurance of %c in %s is %s\n", char2, src, strrchr(src, char2));
	printf("The last occurance of %c in %s is %s\n", char3, src, strrchr(src, char3));
	printf("The last occurance of %c in %s is %s\n", num1, src, strrchr(src, num1));
	printf("The last occurance of %c in %s is %s\n", num2, src, strrchr(src, num2));
	printf("The last occurance of %d in %s is %s\n", num3, src, strrchr(src, num3));
	printf("==================\n");
        printf("The last occurance of %c in %s is %s\n", char1, src, ft_strrchr(src, char1));
        printf("The last occurance of %c in %s is %s\n", char2, src, ft_strrchr(src, char2));
        printf("The last occurance of %c in %s is %s\n", char3, src, ft_strrchr(src, char3));
	printf("The last occurance of %c in %s is %s\n", num1, src, ft_strrchr(src, num1));
	printf("The last occurance of %c in %s is %s\n", num2, src, ft_strrchr(src, num2));
        printf("The last occurance of %d in %s is %s\n", num3, src, ft_strrchr(src, num3));

	return(0);
}*/
