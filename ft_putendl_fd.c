/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:41:07 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/16 18:04:41 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	iter;

	iter = 0;
	while (s[iter])
	{
		write(fd, &s[iter], 1);
		iter++;
	}
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	*name;

	name = "Razan Srour";
	ft_putendl_fd(name, 1);
	return (0);
}
*/
