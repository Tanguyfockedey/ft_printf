/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:18:25 by tfockede          #+#    #+#             */
/*   Updated: 2022/03/08 18:18:25 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_spec_unsigned(unsigned int un)
{
	char	*string;
	int		count;

	string = ft_itoa(un); //should be unsigned int not int
	if (!string)
		return (0);
	count = ft_strlen(string);
	ft_putstr_fd(string, 1);
	free(string);
	return (count);
}
