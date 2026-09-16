/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malnaam <malnaam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 15:45:35 by malnaam           #+#    #+#             */
/*   Updated: 2026/09/10 17:13:17 by malnaam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_len;
	size_t	d_len;
	int		i;

	s_len = ft_strlen(src);
	d_len = 0;
	while (dst[d_len] && d_len < size)
		d_len++;
	if (size <= d_len)
		return (size + s_len);
	i = 0;
	while (src[i] && (d_len + i < size - 1))
	{
		dst[d_len + i] = src [i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}
