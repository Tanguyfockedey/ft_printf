/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:15:12 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/19 15:15:12 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Outputs the integer ’n’ to the given file descriptor.
*/

#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	unb;

	if (n < 0)
		ft_putchar('-', fd);
	if (n < 0)
		unb = -n;
	else
		unb = n;
	if (unb > 9)
	{
		ft_putnbr_fd(unb / 10, fd);
		unb = unb % 10;
	}
	ft_putchar('0' + unb, fd);
}
