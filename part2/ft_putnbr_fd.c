/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malnaam <malnaam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 13:57:20 by malnaam           #+#    #+#             */
/*   Updated: 2026/09/12 14:23:27 by malnaam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long		ln;

	ln = n;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln = -ln;
	}
	if (ln > 9)
	{
		ft_putnbr_fd(ln / 10, fd);
	}
	ft_putchar_fd((ln % 10) + '0', fd);
}
