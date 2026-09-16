/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malnaam <malnaam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 13:04:45 by malnaam           #+#    #+#             */
/*   Updated: 2026/09/12 14:12:28 by malnaam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ftlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*arr;
	size_t		size;
	long		num;

	num = n;
	size = ftlen(n);
	arr = malloc(sizeof(char) * (size + 1));
	if (!arr)
		return (NULL);
	arr[size] = '\0';
	if (num == 0)
		arr[0] = '0';
	if (num < 0)
	{
		arr[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		arr[size -1] = (num % 10) + '0';
		num = num / 10;
		size--;
	}
	return (arr);
}
