#include "libft.h"
#include <stdlib.h>

static	size_t	numlen(int n)
{
	size_t	length;

	length = 0;
	if (n <= 0)
	{
//		printf("n <= 0, %d <= 0\n", n);
		length++; //to count the minus sign incase of negative number, and to count the zero if the number is zero.
	}
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*buffer;
	size_t	len_number;
	long	number;

	number = n;
	len_number = numlen(number);
	buffer = malloc(sizeof(char) * (len_number + 1));
	if (!buffer)
		return (NULL);
	if (number < 0)
	{
		buffer[0] = '-';
		number = -number;
	}
//	printf("len_number = %ld\n", len_number);
//	printf("Assigning the null terminator to the last placeholder in the buffer\n");
	buffer[len_number--] = '\0';
//	printf("len_number = %ld\n", len_number);
	if (number == 0)
		buffer[0] = '0';
	while (number)
	{
//		printf("buffer[%ld] = %c\n", len_number, buffer[len_number]);
		buffer[len_number--] = number % 10 + '0';
//		printf("buffer[%ld] = %c\n", len_number + 1, buffer[len_number + 1]);
		number /= 10;
	}
	return (buffer);
}
/*
int	main()
{
	int	number = -45767016;

	printf("The string rep of %d is %s\n", number, ft_itoa(number));

	return 0;
}*/
