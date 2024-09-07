/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:55:36 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/07 12:56:36 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

//char    *ft_strdup(const char *s1);

/*static size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t		iter;
	size_t		len_src;
	size_t		len_dest;
	const char	*buffer;

	buffer = dst;
	len_src = ft_lenstr(src);
	len_dest = ft_lenstr(dst);
	iter = len_dest;
	printf("buffer = %s\n", buffer);
	printf("len_src = %ld\n", len_src);
	printf("len_dest = %ld\n", len_dest);
	printf("")

}*/

static size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		iter;
	size_t		length;
	const char	*buffer;

	iter = 0;
	buffer = src;
	length = ft_strlen(buffer);
	if (!src) // if the src is null then return the length of the src which is 0
		return (0);
	if (size == 0) //if the required size to opy from src is 0, then return the length of src
		return (length);
	while (iter < length && iter < (size - 1)) // size - 1 for null terminator
	{
		dst[iter] = buffer[iter];
		iter++;
	}
	dst[iter] = '\0';
	printf("iter = %ld\n", iter);
	printf("length = %ld\n", length);
	printf("size = %ld\n", size);
	printf("buffer = %s\n", buffer);
	printf("dst = %s\n", dst);
	return length;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	len_s1 = ft_strlen(s1) + 1;
	len_s2 = ft_strlen(s2);
	joined_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!joined_str)
		return (NULL);
	ft_strlcpy(joined_str, s1, len_s1);
//	ft_strlcat()
	return (joined_str);

}


/*
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len1;
	size_t	len2;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dest = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, len1 + 1);
	ft_strlcat(dest, s2, len1 + len2 + 1);
	return (dest);
}
*/
int	main()
{
	char	name1[] = "Razan";
	char	name2[] = "_Srour";

	printf("The join of %s and %s is %s\n", name1, name2, ft_strjoin(name1, name2));
	return (0);
}

