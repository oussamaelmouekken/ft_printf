/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:02:40 by oel-moue          #+#    #+#             */
/*   Updated: 2023/11/29 15:02:59 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	my_printf(char f, va_list arg)
{
	int	count;

	count = 0;
	if (f == 'c')
		count = ft_putchar(va_arg(arg, int));
	else if (f == 's')
		count = ft_putstr(va_arg(arg, char *));
	else if (f == 'd' || f == 'i')
		count = ft_putnbr(va_arg(arg, int));
	else if (f == 'x')
		count = ft_putnbr_base(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (f == 'X')
		count = ft_putnbr_base(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (f == 'u')
		count = ft_putnbr_base(va_arg(arg, unsigned int), "0123456789");
	else if (f == 'p')
	{
		count = ft_putstr("0x");
		count += ft_putnbr_base(va_arg(arg, unsigned int), "0123456789abcdef");
	}
	else
		count += ft_putchar(f);
	return (count);
}

int	ft_printf(const char *f, ...)
{
	va_list	arg;
	int		count;
	int		i;

	va_start(arg, f);
	count = 0;
	i = 0;
	while (f[i] != '\0')
	{
		if (f[i] == '%')
		{
			i++;
			count += my_printf(f[i], arg);
		}
		else
			count += ft_putchar(f[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
