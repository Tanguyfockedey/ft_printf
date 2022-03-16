/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_decimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:43:27 by tfockede          #+#    #+#             */
/*   Updated: 2022/03/08 17:43:27 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_intlen(int n)
{
	int				intlen;
	unsigned int	un;

	intlen = 1;
	un = n;
	if (n < 0)
	{
		un = -n;
		intlen++;
	}
	while (un > 9)
	{
		un /= 10;
		intlen++;
	}
	return (intlen);
}

int	ft_spec_decimal(int n)
{
	ft_putnbr_fd(n, 1);
	return (ft_intlen(n));
}
