/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_10.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:31:19 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/25 11:31:20 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_10(int n)
{
	int	k;
	int	j;

	j = n;
	k = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		if (n == -2147483648)
			n = (n + 1) * (-1);
		else
			n *= -1;
		k += 1;
	}
	while (n > 0)
	{
		j = n % 10;
		n = n / 10;
		k++;
	}
	return (k);
}

int	ft_10_u(unsigned int n)
{
	int	k;
	int	j;

	k = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		k += 1;
	}
	while (n > 0)
	{
		j = n % 10;
		n = n / 10;
		k++;
	}
	return (k);
}
