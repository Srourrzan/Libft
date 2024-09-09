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

size_t   ft_strlcat(char *dst, const char *src, size_t size)
{
        size_t          iter;
        size_t          len_src;
        size_t          len_dest;
        const char      *buffer;

        buffer = src;
        len_src = ft_strlen(src);
        len_dest = ft_strlen(dst);
        iter = 0;
//        printf("buffer = %s\n", buffer);
//        printf("len_src = %ld\n", len_src);
 //       printf("len_dest = %ld\n", len_dest);
//        printf("iter = %ld\n", iter);
        if (!dst || len_dest == 0)
                return (0);
        if (!src || len_src == 0)
                return (len_dest);
//        printf("dst[%ld] = %c\n", len_dest, dst[len_dest]);
        while (iter < len_src && iter < (size - 1))
        {
//                printf("Befor\n");
//                printf("dst[%ld] = %c\n", len_dest, dst[len_dest]);
//                printf("buffer[%ld] = %c\n", iter, buffer[iter]);
                dst[len_dest] = buffer[iter];
//                printf("After\n");
//                printf("dst[%ld] = %c\n", len_dest, dst[len_dest]);
//                printf("buffer[%ld] = %c\n", iter, buffer[iter]);
                iter++;
                len_dest++;
        }
        dst[len_dest] = '\0';
//        printf("dest after finishing the concatintion = %s\n", dst);
        return (len_dest);
}
/*
int	main()
{
	const char	*src = "Srour";
	char	dest[11] = "Razan_";
	size_t	cat_size = 12;

	printf("concatinating %s with %s\n", dest, src);
	printf("%ld", ft_strlcat(dest, src, cat_size));
	printf("\n%s\n", dest);

	return (0);
}*/
