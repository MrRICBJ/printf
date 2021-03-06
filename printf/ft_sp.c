/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:04 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/25 12:14:43 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_sp(t_list *tmp)
{
	while (tmp->sp > 0)
	{
		write (1, " ", 1);
		tmp->k++;
		tmp->sp--;
	}
}
