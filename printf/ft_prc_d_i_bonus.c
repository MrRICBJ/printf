/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prc_d_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:16 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/25 12:22:15 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_prc(t_list *tmp, int inf)
{
	int		k;
	char	*s;

	k = inf;
	s = "2147483648";
	if ((inf < 0) && (inf == -2147483648))
	{
		k = (k + 1) * -1;
		if ((11 > 0) && (tmp->prc != 0) && (tmp->prc != 0))
		{
			if (tmp->zero == 0)
				tmp->k += 10 + write (1, "-", 1);
			ft_zero(tmp->prc - 10, tmp);
			ft_putstr(s, 10);
		}
		else
			tmp->k += ft_putnbr(tmp, inf);
	}
	else if (inf < 0)
		ft_if_1(tmp, inf, k);
	if (inf > 0 && tmp->prc == 0)
		tmp->k += ft_putnbr(tmp, inf);
	if ((inf >= 0) && (tmp->prc != 0))
		ft_if_2(tmp, inf, k);
	return (tmp->k);
}

void	ft_zero(int i, t_list *tmp)
{
	while (i > 0)
	{
		tmp->k += write(1, "0", 1);
		i--;
	}	
}

void	ft_if_1(t_list *tmp, int inf, int k)
{
	if (tmp->prc == 0)
		tmp->k += ft_putnbr(tmp, inf);
	else
	{
		k = ft_10(inf) - 1;
		if (tmp->zero == 0)
			tmp->k += write (1, "-", 1);
		if ((k > 0) && (tmp->prc != 0))
		{
			k = tmp->prc - k;
			ft_zero(k, tmp);
			tmp->k += ft_putnbr(tmp, -inf);
		}
	}
}

void	ft_if_2(t_list *tmp, int inf, int k)
{
	int	i;

	i = 0;
	k = ft_10(inf);
	if (tmp->plus != 0)
	{
		tmp->k += write (1, "+", 1);
		k++;
	}
	i = tmp->prc - k;
	ft_zero(i, tmp);
	tmp->k += ft_putnbr(tmp, inf);
}
