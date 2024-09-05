/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:17:13 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/02 18:32:33 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*buffer1;
	char		*buffer2;

	i = n;
	buffer1 = (char *)src;
	buffer2 = (char *)dest;
	printf("src buffer1 = %s\n", buffer1);
	printf("dest buffer2 = %s\n", buffer2);
	printf("i = n = %ld\n", i);
	if (dest == src)
	{
		printf("dest == src == %p\n", dest);
		printf("Returning destination.\n");
		return (dest);
	}
	else if (buffer2 > buffer1)
	{
		printf("dest(buffer2) %s > src(buffer1) %s\n", buffer2, buffer1);
		while (i-- > 0)
		{
			printf("i = %ld\n", i);
			printf("*(buffer2 + i) = %c\n", *(buffer2 + i));
			printf("*(buffer1 + i) = %c\n", *(buffer1 + i));
			*(buffer2 + i) = *(buffer1 + i);
			printf("*(buffer2 + i) = %c\n", *(buffer2 + i));
			printf("*(buffer1 + i) = %c\n", *(buffer1 + i));
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
                        printf("i = %ld\n", i);
                        printf("*(buffer2 + i) = %c\n", *(buffer2 + i));
                        printf("*(buffer1 + i) = %c\n", *(buffer1 + i));
                        *(buffer2 + i) = *(buffer1 + i);
                        printf("*(buffer2 + i) = %c\n", *(buffer2 + i));
                        printf("*(buffer1 + i) = %c\n", *(buffer1 + i));
			i++;
		}
	}
	return (buffer2);
}
/*
int	main()
{
	const char	*src = "Razan Srour";
	char		dest1[7];
//	char		dest2[12];

//	memmove(dest1, src, 5);
//	memmove(dest2, src, 12);
	ft_memmove(dest1, src, 7);

	printf("The moved memory from %s to dest1[7] with n=5 is %s.\n", src, dest1);
//	printf("The moved memory from %s to dest2[12] with n=12 is %s.\n", src, dest2);

	return (0);
}*/
