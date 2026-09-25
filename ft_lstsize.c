/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malnaam <malnaam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 09:12:43 by malnaam           #+#    #+#             */
/*   Updated: 2026/09/17 12:29:18 by malnaam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst ->next;
	}
	return (count);
}
