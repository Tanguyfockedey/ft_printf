/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:38:33 by tfockede          #+#    #+#             */
/*   Updated: 2022/03/08 17:38:33 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_spec_string(char *string)
{
	if (string)
	{
		ft_putstr_fd(string, 1);
		return (ft_strlen(string));
	}
	else
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
}
