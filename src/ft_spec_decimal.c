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
	char	*string;
	int		count;

	string = ft_itoa(n);
	if (!string)
		return (0);
	count = ft_strlen(string);
	ft_putstr_fd(string, 1);
	free(string);
	return (count);
}
