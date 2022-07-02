/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sixte_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:16 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/27 11:37:23 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_sixteen_a(unsigned long int n)
{
	int		i;
	int		k;
	char	s[17];

	i = 0;
	if (n == 0)
		 return (ft_putchar((int)n + '0'));
	i = 0;
	k = 0;
	while (n > 0)
	{
		if ((n % 16) < 10)
			s[k] = ((n % 16) + '0');
		else
			s[k] = (n % 16) + 87;
		k++;
		n = n / 16;
	}
	s[k] = '\0';
	return (ft_obr(s));
}

int	ft_sixteen_s(unsigned int n)
{
	int		i;
	int		k;
	char	s[17];

	i = 0;
	if (n == 0)
		 return (ft_putchar((int)n + '0'));
	i = 0;
	k = 0;
	while (n > 0)
	{
		if ((n % 16) < 10)
			s[k] = ((n % 16) + '0');
		else
			s[k] = (n % 16) + 87;
		k++;
		n = n / 16;
	}
	s[k] = '\0';
	return (ft_obr(s));
}
