/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minus_wdt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:32:39 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/25 12:42:03 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_minus_wdt(int i, t_list *tmp)
{
	if ((tmp->prc > 0) && (tmp->prc < i))
		i = tmp->prc;
	if (tmp->wdt > i)
	{
		if (tmp->minus != 0)
		{
			while (tmp->wdt - i > 0)
			{
				tmp->k += write (1, " ", 1);
				tmp->wdt--;
			}
		}
	}
}
