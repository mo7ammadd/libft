/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malnaam <malnaam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 10:24:22 by malnaam           #+#    #+#             */
/*   Updated: 2026/09/12 14:25:23 by malnaam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t				i;
	size_t				j;
	char				*string;

	if (!s1 || !s2)
		return (NULL);
	string = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!string)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		string[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		string[i] = s2[j];
		j++;
		i++;
	}
	string[i] = '\0';
	return (string);
}
