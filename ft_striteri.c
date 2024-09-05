/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:45:53 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/04 15:38:30 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
void    ft_test(unsigned int i, char *str)
{
        printf("inside the ft_test.\n");
        printf("passed parameters: %d, %d\n", i, *str);
        *str = 'A' ;
	//str++;
        printf("After summation: %d, %d\n", i, *str);
	//
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		iter;

	iter = 0;
	if(!s || !f)
		return ;
	while(s[iter])
	{
		printf("s + %d = %s\n", iter, (s + iter));
		f(iter, (s+iter));
		iter++;
	}
	return ;
}

/*
int	main()
{
	char	name[] = "Razan Srour";

	ft_striteri(name, &ft_test);
	return (0);
}*/
