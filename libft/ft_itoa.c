/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:29:40 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/18 14:29:40 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns a string representing the integer received as an 
	argument. Negative numbers must be handled.
*/

#include "libft.h"

static unsigned int	ft_intlen(int n)
{
	unsigned int	intlen;
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

char	*ft_itoa(int n)
{
	char			*string;
	unsigned int	intlen;
	unsigned int	un;

	un = n;
	if (n < 0)
		un = -n;
	intlen = ft_intlen(n);
	string = malloc((intlen + 1) * sizeof(char));
	if (!string)
		return (0);
	string[intlen] = '\0';
	while (intlen-- > 0)
	{	
		string[intlen] = '0' + un % 10;
		un /= 10;
	}
	if (n < 0)
		string[0] = '-';
	return (string);
}
