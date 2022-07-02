/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condition.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:04 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/25 12:43:51 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_condition(t_list *tmp, char *s, void *inf)
{
	if (*s == 'c')
	{
		tmp->zero = 0;
		ft_wdt_p(1, tmp);
		tmp->k += ft_putchar((int) inf);
		ft_minus_wdt(1, tmp);
	}
	else if (*s == 's')
		ft_condition_2(tmp, inf);
	else if (*s == 'p')
		ft_condition_3(tmp, inf);
	else if ((*s == 'd') || (*s == 'i'))
		ft_condition_4(tmp, inf);
	else if (*s == 'u')
		ft_condition_5(tmp, inf);
	else if (*s == 'x')
		ft_condition_6(tmp, inf);
	else if (*s == 'X')
		ft_condition_7(tmp, inf);
	else if (*s == '%')
	{
		write (1, "%", 1);
		tmp->k++;
	}
	return (tmp->k);
}

void	ft_condition_2(t_list *tmp, void *inf)
{
	tmp->zero = 0;
	if (tmp->wdt != 0 && ((char *) inf != 0))
		ft_wdt_p(ft_strlen((char *) inf), tmp);
	else if (tmp->wdt != 0 && ((char *) inf == 0))
		ft_wdt_p(6, tmp);
	if (tmp->point == 1 && ((char *) inf != 0))
		tmp->k += ft_putstr((char *) inf, tmp->prc);
	else if (tmp->point == 1 && ((char *) inf == 0))
		tmp->k += ft_putstr(tmp->null_str, tmp->prc);
	else if (inf == NULL)
	{
		write(1, "(null)", 6);
		tmp->k += 6;
	}
	else
		tmp->k += ft_putstr((char *) inf, ft_strlen((char *) inf));
	if (tmp->wdt != 0 && ((char *) inf != 0) && (tmp->minus != 0))
		ft_minus_wdt(ft_strlen((char *) inf), tmp);
	else if (tmp->wdt != 0 && ((char *) inf == 0) && (tmp->minus != 0))
		ft_minus_wdt(6, tmp);
}

void	ft_condition_3(t_list *tmp, void *inf)
{
	tmp->zero = 0;
	ft_wdt_p(2 + ft_16((unsigned long int) inf), tmp);
	write (1, "0x", 2);
	tmp->k += 2 + ft_sixteen_a((unsigned long int) inf);
	ft_minus_wdt(2 + ft_16((unsigned long int) inf), tmp);
}

void	ft_condition_4(t_list *tmp, void *inf)
{
	tmp->ch = (int) inf;
	if ((tmp->sp != 0) && (tmp->ch >= 0))
		ft_sp(tmp);
	if ((((int) inf) < 0) && (tmp->zero != 0))
		tmp->k += write (1, "-", 1);
	ft_wdt_p(ft_10((int) inf), tmp);
	if (tmp->point == 1)
		ft_prc(tmp, (int) inf);
	else
		tmp->k += ft_putnbr(tmp, (int) inf);
	if ((tmp->prc == ft_10((int) inf)) && ((int) inf < 0))
		ft_minus_wdt_d(1 + ft_10((int) inf), tmp);
	else
		ft_minus_wdt_d(ft_10((int) inf), tmp);
}

void	ft_condition_5(t_list *tmp, void *inf)
{
	tmp->ch = (unsigned int) inf;
	ft_wdt_p(ft_10_u((unsigned int) inf), tmp);
	if (tmp->point == 1)
		ft_prc_u(tmp, (unsigned int) inf);
	else
		tmp->k += ft_putnbr_u((unsigned int) inf);
	ft_minus_wdt_d(ft_10_u((int) inf), tmp);
}
