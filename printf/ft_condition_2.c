/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condition_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:04 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/26 17:12:28 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_condition_6(t_list *tmp, void *inf)
{
	tmp->ch = (unsigned int) inf;
	if ((tmp->grille != 0) && (tmp->ch != 0))
	{
		ft_wdt_p(2 + ft_16((unsigned int) inf), tmp);
		tmp->k += write (1, "0x", 2);
	}
	else
		ft_wdt_p(ft_16((unsigned int) inf), tmp);
	if (tmp->point == 1)
		ft_prc_x(tmp, (unsigned int) inf);
	else
		tmp->k += ft_sixteen_s((unsigned int) inf);
	if (tmp->grille != 0)
		ft_minus_wdt_d(2 + ft_16((unsigned int) inf), tmp);
	else
		ft_minus_wdt_d(ft_16((unsigned int) inf), tmp);
}

void	ft_condition_7(t_list *tmp, void *inf)
{
	tmp->ch = (unsigned int) inf;
	if ((tmp->grille != 0) && (tmp->ch != 0))
	{
		ft_wdt_p(2 + ft_16((unsigned int) inf), tmp);
		tmp->k += write (1, "0X", 2);
	}
	else
		ft_wdt_p(ft_16((unsigned int) inf), tmp);
	if (tmp->point == 1)
		ft_prc_X(tmp, (unsigned int) inf);
	else
		tmp->k += ft_sixteen_A((unsigned int) inf);
	if (tmp->grille != 0)
		ft_minus_wdt_d(2 + ft_16((unsigned int) inf), tmp);
	else
		ft_minus_wdt_d(ft_16((unsigned int) inf), tmp);
}
