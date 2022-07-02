/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wdt_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:35:59 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/27 11:38:36 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_wdt_p(int i, t_list *tmp)
{
	int	k;

	k = 0;
	if ((tmp->ch > 0) && (tmp->plus != 0))
		i++;
	if (i < tmp->prc)
	{
		k = tmp->prc - i;
		if (tmp->ch < 0)
			k = k + 1;
	}
	if ((tmp->ch == 0) && (tmp->point != 0) && (tmp->prc == 0))
		i = 0;
	if (tmp->wdt > i)
	{
		if ((tmp->minus == 0) && (tmp->prc < tmp->wdt))
		{
			if ((tmp->zero != 0) && (tmp->point == 0))
				ft_nul_1(tmp, i, k);
			else if ((tmp->zero != 0) && (tmp->ch != 0))
				ft_nul_1(tmp, i, k);
			else
				ft_nul_2(tmp, i, k);
		}
	}
}

void	ft_nul_1(t_list *tmp, int i, int k)
{
	while (tmp->wdt - i - k > 0)
	{
		tmp->k += write (1, "0", 1);
		tmp->wdt--;
	}
}

void	ft_nul_2(t_list *tmp, int i, int k)
{
	while (tmp->wdt - i - k > 0)
	{
		tmp->k += write (1, " ", 1);
		tmp->wdt--;
	}
}
