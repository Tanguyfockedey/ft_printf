/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_hexalower.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:01:10 by tfockede          #+#    #+#             */
/*   Updated: 2022/03/08 19:01:10 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_spec_hexalower(int n)
{
	int	count;

	count = 2;
	ft_putstr_fd("0x", 1);
	ft_putnbr_base(n, "0123456789abcdef");
	return (count); //still missing counts
}
