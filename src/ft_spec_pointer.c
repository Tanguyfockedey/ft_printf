/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:29:19 by tfockede          #+#    #+#             */
/*   Updated: 2022/03/08 18:29:19 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_spec_pointer(void *p)
{
	int	counter;

	ft_putstr_fd("0x", 1);
	counter = 2;
	counter += ft_putunbr_base((unsigned long) p, "0123456789abcdef");
	return (counter);
}
