/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:32:48 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/14 09:32:50 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Converts the given unsigned decimal number to different base and displays 
	it on the standard output.
*/

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_checkbase(char *base, unsigned int *baselength)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	*baselength = i;
	while (--i > 0)
	{
		j = i;
		while (--j >= 0)
		{
			if (base[i] == base[j])
				return (0);
		}
	}
	return (!0);
}

static void	ft_basechange(unsigned long ul, char *base,
							unsigned int baselength, int *p_count)
{
	if (ul > baselength - 1)
	{
		ft_basechange(ul / baselength, base, baselength, p_count);
		ul %= baselength;
	}
	ft_putchar(base[ul]);
	*p_count += 1;
}

int	ft_putunbr_base(unsigned long ul, char *base)
{
	unsigned int	baselength;
	int				count;

	count = 0;
	if (ft_checkbase(base, &baselength) == 0)
		return (count);
	ft_basechange(ul, base, baselength, &count);
	return (count);
}
