/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:50:40 by oel-moue          #+#    #+#             */
/*   Updated: 2023/12/09 13:50:45 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_putnbr(int nb);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr_base(unsigned long int nbr, char *base);
int	ft_printf(const char *f, ...);
#endif
