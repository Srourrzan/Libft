/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:00:08 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/10 19:56:15 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strchr(const char *src, int c);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
/*
char    *ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while(len && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, 0, len+1));
}*/

static	int	ft_calc_end(char const *s1, char const *set)
{
	int	end;

	end = ft_strlen((char *)s1) - 1;
	while (end > 0)
	{
		if(!ft_strchr(set, s1[end]))
			break;
		end--;
	}
	return (end);
}

static	int	ft_calc_start(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (start < (int)ft_strlen((char *)s1))
	{
		if (!ft_strchr(set, s1[start]))
			break;
		start++;
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	char	*res;

	if(!set)
		return (NULL);
	if (!s1)
	{
		res = malloc(1 * sizeof(char));
		res[0] = '\0';
		return (res);
	}
	end = ft_calc_end(s1, set);
	start = ft_calc_start(s1, set);
	if (start > end)
	{
		res = malloc(1 * sizeof(char));
		res[0] = '\0';
		return (res);
	}
	res = malloc((end - start + 1 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, (char *)&s1[start], end - start + 1 + 1);
	return (res);
}
/*
int	main()
{
	char	*name = "   xxxtripouille";
	char	*trim_set = " x";

	printf("The trimmed version of %s is %s when we try to trim the characters %s from it's sides.\n", name, ft_strtrim(name, trim_set), trim_set);
//	printf("The length of %s is %ld\n", trim_set, ft_strlen(trim_set));

	return (0);
}
*/
