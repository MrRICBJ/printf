/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:16 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/26 15:55:35 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_flags(t_list	*tmp, char *s, int i)
{
	while (s[i] != 'c' && s[i] != 's' && s[i] != 'p' && s[i] != 'd' \
	&& s[i] != 'i' && s[i] != 'u' && s[i] != 'x' && s[i] != 'X' \
	&& s[i] != '%' && s[i + 1])
	{
		if (s[i] == '+')
			tmp->plus = 1;
		if (s[i] == '#')
			tmp->grille = 1;
		if (s[i] == '-')
			tmp->minus = 1;
		if (s[i] == '0')
			tmp->zero = 1;
		if (s[i] >= '1' && s[i] <= '9')
			tmp->wdt = ft_chet(s, &i);
		if (s[i] == '.')
		{
			tmp->point = 1;
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
				tmp->prc = ft_chet(s, &i);
		}
		if (s[i] == ' ')
			tmp->sp = 1;
		++i;
	}
	return (ft_flags_2(tmp, &s[i], i));
}

int	ft_flags_2(t_list *tmp, char *s, int i)
{
	if (tmp->minus != 0 || tmp->prc != 0)
		tmp->zero = 0;
	if (*s != '%')
		ft_condition(tmp, s, va_arg(tmp->ap, void *));
	else
		ft_condition(tmp, s, (void *) 1);
	return (i);
}
