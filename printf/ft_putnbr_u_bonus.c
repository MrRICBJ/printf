/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:16 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/25 12:13:28 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_u(unsigned int n)
{
	int		i;
	int		k;
	char	s[11];

	i = 0;
	if (n == 0)
		return (ft_putchar((int)n + '0'));
	i = 0;
	k = 0;
	while (n > 0)
	{
		if ((n % 10) < 10)
			s[k] = ((n % 10) + '0');
		else
			s[k] = (n % 10) + 87;
		k++;
		n = n / 10;
	}
	s[k] = '\0';
	return (ft_obr(s));
}
