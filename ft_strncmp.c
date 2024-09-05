/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:08:12 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/01 19:08:14 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/*
int	main()
{
	char	*src1 = "Razan Srour";
	char	*src2 = "Razan SrOur";
	char	*src3 = "RazanSrour";

	printf("Difference between %s and %s at %d is %d\n", src1, src2, 5, strncmp(src1, src2, 5));
	printf("Difference between %s and %s at %d is %d\n", src1, src3, 4, strncmp(src1, src3, 4));
	printf("Difference between %s and %s at %d is %d\n", src2, src3, 7, strncmp(src2, src3, 7));
	printf("=====================\n");
        printf("Difference between %s and %s at %d is %d\n", src1, src2, 5, ft_strncmp(src1, src2, 5));
        printf("Difference between %s and %s at %d is %d\n", src1, src3, 4, ft_strncmp(src1, src3, 4));
        printf("Difference between %s and %s at %d is %d\n", src2, src3, 7, ft_strncmp(src2, src3, 7));
	return (0);
}*/
