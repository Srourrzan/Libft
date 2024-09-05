/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:13:10 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/02 21:58:15 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		iter_dest;
	size_t		dest_length;
	size_t		iter_src;

	iter_dest = ft_strlen(dst);
	dest_length = ft_strlen(dst);
	iter_src = 0;
	if (size && dest_length <= size)
	{
		while (src[iter_src] != '\0' && iter_dest < (size - 1))
		{
			dst[iter_dest] = src[iter_src];
			iter_dest++;
			iter_src++;
		}
		dst[iter_dest] = '\0';
	}
	if (size == 0)
		dest_length = 0;
	if (size < dest_length)
		dest_length = size;
	return (dest_length + ft_strlen((char *)src));
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	dst_len;

	i = ft_strlen(dst);
	dst_len = ft_strlen(dst);
	y = 0;
	if (dstsize && ft_strlen(dst) <= dstsize)
	{
		while (src[y] != '\0')
		{
			printf("%c\n", src[y]);
			printf("%c\n", dst[i]);
			printf("%d\n", i);
			printf("%d\n", y);
			printf("test");
			dst[i] = src[y];
			printf("src[y] assigned to dst[i]");
			i++;
			printf("i values is increased");
			y++;
			printf("y values is increased");
		}
		dst[i] = '\0';
	}
	if (dstsize == 0)
		dst_len = 0;
	if (dstsize < dst_len)
		dst_len = dstsize;
	return (dst_len + ft_strlen((char *)src));
}

int	main()
{
	const char	*src = "Srour";
	char	*dest = "Razan_";
	size_t	destsize = sizeof(src);

	printf("concatinating %s with %s\n", dest, src);
	printf("%ld", ft_strlcat(dest, src, destsize));
	printf("\n%s\n", dest);

	return (0);
}
