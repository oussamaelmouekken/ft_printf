/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:51:19 by oel-moue          #+#    #+#             */
/*   Updated: 2023/12/09 13:51:25 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int	i;
	int	count;

	count = 0;
	i = ft_strlen(base);
	if (nbr >= i)
	{
		count += ft_putnbr_base(nbr / i, base);
	}
	count += ft_putchar(base[nbr % i]);
	return (count);
}
