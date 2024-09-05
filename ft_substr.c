/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:47:17 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/05 19:55:06 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
void    *ft_memcpy(void *dest, const void *src, size_t n);


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	substr_len;

	printf("The length of the src str = %ld\n", ft_strlen(s));
	substr_len = ft_strlen(s + start);
	printf("The length of the substr = %ld\n", substr_len);
	if (!s || !len || (start >= ft_strlen(s)))
		return (NULL);
	if (substr_len < len) // if the passed length (len) of the substring is shorter than the original lenght of the substring then assign len as substr_len `len=substr_len`
		len = substr_len;
	//Memory allocation
	substr = (char *)malloc(sizeof(char) * (len + 1));
	//If the memory allocation fails return NULL
	if (!substr)
		return (NULL);
//	ft_strlcpy(substr, s, substr_len); // using ft_strlcpy to copy a size of substr_len from s to substr
	ft_memcpy(substr, s + start, substr_len); // using ft_memcpy to copy substr_len bytes from memory src to memory dest
	return (substr);
	
}

int	main()
{
	char		*name = "Razan Srour";
	unsigned int	start = 3;
	size_t		size_of_name = sizeof(name) - start;

	printf("The substring of %s starting from %d of length %ld\n", name, start, size_of_name);
	printf("is: %s\n", ft_substr(name, start, size_of_name));
	return (0);
}
