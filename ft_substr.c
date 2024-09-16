/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:47:17 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/10 18:49:30 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	substr_len;


	substr_len = ft_strlen(s + start);
	if (!s || !len || (start >= ft_strlen(s)))
		return (NULL);
	if (substr_len < len)
		len = substr_len;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
	return (NULL);
	ft_strlcpy(substr, s, substr_len);
	return (substr);
	
}
/*
int	main()
{
	char		*name = "Razan Srour";
	unsigned int	start = 3;
	size_t		size_of_name = sizeof(name) - start;

	printf("The substring of %s starting from %d of length %ld\n", name, start, size_of_name);
	printf("is: %s\n", ft_substr(name, start, size_of_name));
	return (0);
}*/
