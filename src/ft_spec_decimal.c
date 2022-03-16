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

int	ft_spec_decimal(int n)
{
	int		count;

	ft_putnbr_fd(n, 1);
	count = 1;
	while(n)
	{
		n /= 10;
		count++;
	} 
	return (count);
}
