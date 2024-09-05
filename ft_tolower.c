/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:42:26 by rsrour            #+#    #+#             */
/*   Updated: 2024/08/27 18:44:52 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>

/*
If c is an uppercase letter, ft_tolower() returns its lowercase equivalent,
if  a lowercase representation exists in the current locale.  Otherwise,
it returns c.
*/
char	ft_tolower(char	c)
{

	if ('A' <= c && 'Z' >= c)
	{
		c += 32;
	}
	return (c);
}
/*
int	main()
{
	char	char1 = 'r';
	char	char2 = 'S';
	char	char3 = '9';
	char	char4 = '*';
	printf("%c when converted to lowercase: %c\n", char1, tolower(char1));
	printf("%c when converted to lowercase: %c\n", char2, tolower(char2));
	printf("%c when converted to lowercase: %c\n", char3, tolower(char3));
	printf("%c when converted to lowercase: %c\n", char4, tolower(char4));

	printf("%c when converted to lowercase %c\n", char1, ft_tolower(char1));
	printf("%c when converted to lowercase %c\n", char2, ft_tolower(char2));
	printf("%c when converted to lowercase %c\n", char3, ft_tolower(char3));
	printf("%c when converted to lowercase %c\n", char4, ft_tolower(char4));

	return (0);

}*/
