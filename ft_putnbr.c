/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:16:01 by oel-moue          #+#    #+#             */
/*   Updated: 2023/09/24 15:21:32 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <unistd.h>

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		count += write(1, "-2", 2);
		count += ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		count += write(1, "-", 1);
		nb = -nb;
		count += ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		count += ft_putnbr(nb / 10);
		count += ft_putnbr(nb % 10);
	}
	else
	{
		count += ft_putchar(nb + 48);
	}
	return (count);
}
