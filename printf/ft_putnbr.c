/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:16 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/25 13:35:03 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(t_list *tmp, int n)
{
	char	s[12];
	int		l;

	l = 0;
	if ((tmp->plus != 0) && (n >= 0))
		tmp->k += write (1, "+", 1);
	if ((tmp->zero != 0) && (n != -2147483648))
		n *= -1;
	if (n == 0)
		return (ft_putchar((int)n + '0'));
	if (n < 0)
	{
		if (n == -2147483648)
		{
			l = n;
			n = (n + 1) * (-1);
		}
		else
			n *= -1;
		if (tmp->zero == 0)
			tmp->k += ft_putchar('-');
	}
	return (ft_bob(n, l, s));
}

int	ft_bob(int	n, int l, char *s)
{
	int	k;

	k = 0;
	while (n > 0)
	{
		if (((n % 10) < 10) && (l == -2147483648))
			s[k] = ((n % 10 + 1) + '0');
		else
			s[k] = (n % 10) + '0';
		k++;
		l++;
		n = n / 10;
	}
	s[k] = '\0';
	return (ft_obr(s));
}
