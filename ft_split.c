/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:48:38 by rsrour            #+#    #+#             */
/*   Updated: 2024/09/14 12:53:16 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	ft_safe_malloc(char **words_vector, int current_position, size_t buffer_size)
{
	int	previous_position;

	previous_position = 0;
	words_vector[current_position] = (char *)malloc(sizeof(char) * buffer_size);
	if (NULL == words_vector[current_position])
	{
		while (previous_position < current_position)
			free(words_vector[previous_position]);
		free(words_vector[previous_position]);
		return 1;
	}
	return 0;
}

// return 0 if all mallocs went fine, otherwise 1
static	int	ft_fill_words_vector(char **words_vector, char const *sentence, char seperator)
{
	size_t		length_of_word;
	int		word_position;

	word_position = 0;
	while (*sentence)
	{
		// printf("We are at word position = %d\n", word_position);
		length_of_word = 0;
		while(*sentence == seperator && sentence)
			++sentence;
		while (*sentence != seperator && *sentence)
		{
			// printf("found a character %s\n", sentence);
			++length_of_word;
			++sentence;
		}
		// printf("End of a word\n, have length of %ld\n", length_of_word);
		if (length_of_word)
		{
			if (ft_safe_malloc(words_vector, word_position, length_of_word + 1))
				return 1;
		}
		// printf("Memory allocation was done safely\n");
		ft_strlcpy(words_vector[word_position], sentence - length_of_word, length_of_word + 1);
		word_position++;
	}
	return 0;
}

static	size_t	ft_count_words(char const *sentence, char seperator)
{
	size_t		counter;
	bool		is_a_word;

	counter = 0;
	while(*sentence)
	{
		is_a_word = false; //This will re-initialize the value of the boolean
		while(*sentence == seperator && *sentence)
			++sentence;
		while(*sentence !=seperator && *sentence)
		{
			if(!is_a_word)//Check the beggining of a word.
			{
				is_a_word = true;
				counter++;
			}
			++sentence;
		}
	}
	return counter;
}

char	**ft_split(char const *s, char c)
{
	size_t		number_of_words;
	char		**words_vector;
	//size_t		iter;

	//iter = 0;
	if (NULL == s)
		return NULL;
	number_of_words = 0; //intialize the variable or there will be a grabage value.
	number_of_words = ft_count_words(s, c); //this step is done to decide the size of the first dimension of the vector
	// printf("Number of words found in the vector: %ld\n", number_of_words);
	words_vector = malloc(sizeof(char *) * (number_of_words + 1));
	if (NULL == words_vector)
		return NULL;
	words_vector[number_of_words] = '\0'; //terminate the vector
	if (ft_fill_words_vector(words_vector, s, c))
		return NULL;
	return words_vector;
}
/*
int	main()
{
	char	name[] = "Razan_Srour";
	char	seperator = '_';
	char	**splitted_name;

	splitted_name = ft_split(name, seperator);
	printf("The %s was seperated from %c into %s, %s\n", name ,seperator ,splitted_name[0], splitted_name[1]);

	return 42;

}
*/