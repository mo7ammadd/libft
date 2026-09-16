/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malnaam <malnaam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 11:23:17 by malnaam           #+#    #+#             */
/*   Updated: 2026/09/12 13:02:12 by malnaam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	*free_all(char **res, size_t j)
{
	while (j > 0)
	{
		j--;
		free(res[j]);
	}
	free(res);
	return (NULL);
}

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static char	*malloc_word(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	j;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	j = 0;
	while (*s)
	{
		if (*s != c)
		{
			res[j] = malloc_word(s, c);
			if (!res[j])
				return (free_all(res, j));
			j++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	res[j] = NULL;
	return (res);
}
