/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_hexaupper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:05:25 by tfockede          #+#    #+#             */
/*   Updated: 2022/03/08 19:05:25 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_spec_hexaupper(int n)
{
	int	count;

	count = 2;
	ft_putstr_fd("0X", 1);
	ft_putnbr_base(n, "0123456789ABCDEF");
	return (count); //still missing counts
}
