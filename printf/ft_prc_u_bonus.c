/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prc_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:16 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/25 12:42:27 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_prc_u(t_list *tmp, unsigned int inf)
{
	int				i;
	unsigned int	k;

	i = 0;
	k = 0;
	if (inf == 4294967295)
	{
		if (tmp->prc == 0)
			tmp->k += ft_putnbr_u(inf);
		else
		{
			tmp->k += ft_zez01(tmp->prc - 10);
			tmp->k += ft_putnbr_u(inf);
		}
	}
	else if ((inf == 0) && (tmp->prc != 0))
	{
		tmp->k += ft_zez01(tmp->prc - 1);
		tmp->k += ft_putnbr_u(inf);
	}
	else if ((inf > 0))
		ft_prc_if(tmp, inf, k);
}

void	ft_prc_if(t_list *tmp, unsigned int inf, unsigned int k)
{
	int	i;

	i = 0;
	if (tmp->prc == 0)
		tmp->k += ft_putnbr_u(inf);
	else
	{
		k = inf;
		while (k > 0)
		{
			k = k / 10;
			i++;
		}
		tmp->k += ft_zez01(tmp->prc - i);
		tmp->k += ft_putnbr_u(inf);
	}
}
