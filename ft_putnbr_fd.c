/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:04:28 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/05 18:08:09 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;

	sign = 0;
//	printf("n = %d\n", n);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			sign = 1;
			n++;
//			printf("n = %d\n", n);
		}
		n = -n;
//		printf("n = %d\n", n);
	}
	if (n > 9)
	{
//		printf("n / 10 = %d\n", n / 10);
		ft_putnbr_fd(n / 10, fd);
	}
//	printf("n mod 10 + '0' + %d = %d\n", sign, n % 10 + '0' + sign);
	ft_putchar_fd(n % 10 + '0' + sign, fd);
}
/*
int	main()
{
	int	n = -576;
	ft_putnbr_fd(n, 1);

	return 0;
}
*/
