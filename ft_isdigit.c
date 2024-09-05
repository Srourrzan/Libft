/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:42:28 by rsrour            #+#    #+#             */
/*   Updated: 2024/08/27 22:31:52 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isdigit(char c)
{
	if('0' <= c && '9' >= c)
	{
		return 2048; 
	}
	return 0;
}
/*
int	main()
{
	char	char1 = 'r';
	char	char2 = 'S';
	char	char3 = '8';
	int	char4 = 9;
	int	char5 = 0;
	char	char6 = '-';
	char	char7 = '+';
	char	char8 = '%';
	int	char9 = -10;

	printf("%c is a digit: %d\n", char1, isdigit(char1));
	printf("%c is a digit: %d\n", char2, isdigit(char2));
	printf("%c is a digit: %d\n", char3, isdigit(char3));
	printf("%d is a digit: %d\n", char4, isdigit(char4));
	printf("%d is a digit: %d\n", char5, isdigit(char5));
	printf("%c is a digit: %d\n", char6, isdigit(char6));
	printf("%c is a digit: %d\n", char7, isdigit(char7));
	printf("===================\n");
	printf("%c is a digit: %d\n", char1, ft_isdigit(char1));
	printf("%c is a digit: %d\n", char2, ft_isdigit(char2));
	printf("%c is a digit: %d\n", char3, ft_isdigit(char3));
	printf("%d is a digit: %d\n", char4, ft_isdigit(char4));
	printf("%d is a digit: %d\n", char5, ft_isdigit(char5));
	printf("%c is a digit: %d\n", char6, ft_isdigit(char6));
	printf("%c is a digit: %d\n", char7, ft_isdigit(char7));
	printf("%c is a digit: %d\n", char8, ft_isdigit(char8));
	printf("%d is a digitL %d\n", char9, ft_isdigit(char9));

	return (0);

}*/
