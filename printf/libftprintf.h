/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:16 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/26 17:12:15 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include	<unistd.h>
# include	<stdlib.h>
# include	<stdarg.h>
# include	<stdio.h>

typedef struct s_list
{	
	va_list				ap;
	int					wdt;
	int					zero;
	int					minus;
	int					point;
	int					sp;
	int					plus;
	int					prc;
	int					k;
	int					grille;
	char				*null_str;
	long long int		ch;
}		t_list;

int		ft_putnbr_u(unsigned int n);
void	ft_sp(t_list *tmp);
int		ft_printf(const char *s, ...);
int		ft_condition(t_list *tmp, char *s, void *inf);
int		ft_putchar(int s);
int		ft_putstr(char *s, int	n);
int		ft_putnbr(t_list *tmp, int n);
int		ft_strlen(const char *s);
int		ft_obr(char *s);
int		ft_sixteen_a(unsigned long int n);
int		ft_sixteen_s(unsigned int n);
int		ft_sixteen_A(unsigned int n);
int		ft_flags(t_list	*tmp, char	*s, int i);
t_list	*ft_initialise_tmp(t_list	*tmp);
int		ft_chet(char *s, int *i);
int		ft_prc(t_list *tmp, int inf);
void	ft_prc_u(t_list *tmp, unsigned int inf);
int		ft_prc_x(t_list *tmp, unsigned int inf);
int		ft_prc_X(t_list *tmp, unsigned int inf);
int		ft_16(unsigned long int n);
void	ft_wdt_p(int i, t_list *tmp);
int		ft_10(int n);
int		ft_10_u(unsigned int n);
void	ft_zero(int i, t_list *tmp);
int		ft_zez01(int k);
void	ft_minus_wdt(int i, t_list *tmp);
void	ft_minus_wdt_d(int i, t_list *tmp);
int		ft_flags_2(t_list *tmp, char *s, int i);
void	ft_condition_2(t_list *tmp, void *inf);
void	ft_condition_3(t_list *tmp, void *inf);
void	ft_condition_4(t_list *tmp, void *inf);
void	ft_condition_5(t_list *tmp, void *inf);
void	ft_condition_6(t_list *tmp, void *inf);
void	ft_condition_7(t_list *tmp, void *inf);
void	ft_nul_1(t_list *tmp, int i, int k);
void	ft_nul_2(t_list *tmp, int i, int k);
void	ft_if_1(t_list *tmp, int inf, int k);
void	ft_if_2(t_list *tmp, int inf, int k);
void	ft_prc_if(t_list *tmp, unsigned int inf, unsigned int k);
void	ft_prs_if_1(t_list *tmp, unsigned long int inf);
void	ft_prs_if_2(t_list *tmp, unsigned int inf);
int		ft_bob(int	n, int l, char *s);

#endif
