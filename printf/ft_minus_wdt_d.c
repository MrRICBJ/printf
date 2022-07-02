/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minus_wdt_d.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:32:23 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/25 12:47:43 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_minus_wdt_d(int i, t_list *tmp)
{
	if ((tmp->wdt > i) && (tmp->minus != 0))
	{
		if (tmp->prc == 0)
		{
			if (tmp->point != 0)
				ft_nul_2(tmp, 0, 0);
			else
				ft_nul_2(tmp, i, 0);
		}
		else if (tmp->prc != 0)
		{
			if (i < tmp->prc)
				i += tmp->prc - i;
			while (tmp->wdt - i > 0)
			{
				tmp->k += write (1, " ", 1);
				tmp->wdt--;
			}
		}		
	}
}
