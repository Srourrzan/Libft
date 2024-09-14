#include "libft.h"
#include <stdlib.h>
#include <stdbool.h>


static	size_t	count_words(char const *s, char delimeter)
{
	size_t	number_of_words;
	bool	inside_a_word;

	number_of_words = 0;
	while (*s)
	{
		inside_a_word = false;
		while (*s == delimeter && *S)
			++s;
	
		while (*s != delimeter && *s)
		{
			if (!inside_a_word)
			{
				++number_of_words;
				inside_a_word = true;
			}
		}
	}
	return number_of_words;
}

char	**ft_split(char const *s, char c)
{
	size_t	number_of_words;
	char	**words_vector;

	if (!s)
		return NULL;
	number_of_words = count_words(s, c);
	words_vector = malloc(sizeof(char *) * (number_of_words + 1));
	if (!words_vector)
		return NULL;
	words_vector[number_of_tokens] = '\0';

}

int	main()
{
	char	name[] = "RazanMSrour";
	char	split_char = 'M';
	char	split_str[][];

	split_str = ft_split(name, split_char);
	printf("The name %s have been split from %c into %s\n", name, split_char, split_str);

	return (0);
}
