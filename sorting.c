#include <stdio.h>

void	sort(char array[], int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if(array[j] < array[j+1])
			{
				int	temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	printArray(char array[], int size)
{
	int	i;
	i = 0;
	while(i < size)
		printf("%c ", array[i++]);
}

int	main(void)
{
	//int	array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
	char array[] = {'F', 'A', 'D', 'B', 'C'};
	int	size = sizeof(array)/sizeof(array[0]);

	printf("array before sorting:\n");
	for (int i = 0; i < size; i++)
		printf("%d,", array[i]);
	printf("\n");

	sort(array, size);
	printf("array after sorting\n");
	printArray(array, size);

	return (0);
}
