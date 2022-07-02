/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prs_x_X.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:16 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/26 17:00:35 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_prc_x(t_list *tmp, unsigned int inf)
{
	int				i;

	i = 0;
	if (inf == 4294967295)
	{
		if (tmp->prc == 0)
			tmp->k += ft_sixteen_a(inf);
		else
		{
			tmp->k += ft_zez01(tmp->prc - 8);
			tmp->k += ft_sixteen_a(inf);
		}
	}
	else if ((inf == 0) && (tmp->prc != 0))
	{
		tmp->k += ft_zez01(tmp->prc - 1);
		tmp->k += ft_sixteen_a(inf);
	}
	else if ((inf > 0))
		ft_prs_if_1(tmp, inf);
	return (tmp->k);
}

void	ft_prs_if_1(t_list *tmp, unsigned long int inf)
{
	int				i;
	unsigned int	k;

	i = 0;
	if (tmp->prc == 0)
		tmp->k += ft_sixteen_a(inf);
	else
	{
		k = inf;
		while (k > 0)
		{
			k = k / 16;
			i++;
		}
		tmp->k += ft_zez01(tmp->prc - i);
		tmp->k += ft_sixteen_a(inf);
	}
}

int	ft_zez01(int k)
{
	int	i;

	i = 0;
	while (k > 0)
	{
		write(1, "0", 1);
		k--;
		i++;
	}
	return (i);
}

int	ft_prc_X(t_list *tmp, unsigned int inf)
{
	int				i;

	i = 0;
	if (inf == 4294967295)
	{
		if (tmp->prc == 0)
			tmp->k += ft_sixteen_A(inf);
		else
		{
			tmp->k += ft_zez01(tmp->prc - 8);
			tmp->k += ft_sixteen_A(inf);
		}
	}
	else if ((inf == 0) && (tmp->prc != 0))
	{
		tmp->k += ft_zez01(tmp->prc - 1);
		tmp->k += ft_sixteen_A(inf);
	}
	else if ((inf > 0))
		ft_prs_if_2(tmp, inf);
	return (tmp->k);
}

void	ft_prs_if_2(t_list *tmp, unsigned int inf)
{
	int				i;
	unsigned int	k;

	i = 0;
	if (tmp->prc == 0)
		tmp->k += ft_sixteen_A(inf);
	else
	{
		k = inf;
		while (k > 0)
		{
			k = k / 16;
			i++;
		}
		tmp->k += ft_zez01(tmp->prc - i);
		tmp->k += ft_sixteen_A(inf);
	}
}
