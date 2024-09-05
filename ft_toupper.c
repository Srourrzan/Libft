/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:56:39 by rsrour            #+#    #+#             */
/*   Updated: 2024/08/27 18:48:18 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
 * If  c is a lowercase letter, toupper() returns its uppercase equivalent,
 * if an uppercase representation exists in the current locale.  Otherwise,
 * it returns c.
 */
char	ft_toupper(char c)
{
	if ('a' <= c && 'z' >= c)
	{
		c =- 32;
	}
	return c;
}
/*
int	main()
{
	char	char1 = 'r';
	char	char2 = 'S';
	char	char3 = '8';
	char	char4 = '-';
	printf("%c in uppercase is represented as %c\n", char1, toupper(char1));
	printf("%c in uppercase is represented as %c\n", char2, toupper(char2));
	printf("%c in uppercase is represented as %c\n", char3, toupper(char3));
	printf("%c in uppercase is represented as %c\n", char4, toupper(char4));
	printf("%c is converted to upper case through the ft_toupper to %c\n",
			char1, ft_toupper(char1));
	printf("%c is converted to upper case through the ft_toupper to %c\n",
			char2, ft_toupper(char2));
	printf("%c is converted to upper case through the ft_toupper to %c\n",
			char3, ft_toupper(char3));
	printf("%c is converted to upper case through the ft_toupper to %c\n",
			char4, ft_toupper(char4));

	return 0;
}*/
