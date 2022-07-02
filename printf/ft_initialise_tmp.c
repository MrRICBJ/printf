/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialise_tmp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:16 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/24 20:09:50 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_list	*ft_initialise_tmp(t_list	*tmp)
{
	tmp->wdt = 0;
	tmp->zero = 0;
	tmp->minus = 0;
	tmp->point = 0;
	tmp->sp = 0;
	tmp->plus = 0;
	tmp->prc = 0;
	tmp->null_str = "(null)";
	tmp->grille = 0;
	return (tmp);
}
