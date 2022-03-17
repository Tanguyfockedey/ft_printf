/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:08:48 by tfockede          #+#    #+#             */
/*   Updated: 2022/02/17 15:08:48 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char			c;
	unsigned int	un;
	int				*z;
	int				b;

	z = &b;
	un = UINT32_MAX;
	c = 'A';

	printf("\nPrintf\n");
	b = printf("c is : %c", c);
	printf("\t\treturn: %d\n", b);
	b = printf("p is : %p", z);
	printf("\treturn: %d\n", b);
	b = printf("p is : %p", 0);
	printf("\t\treturn: %d\n", b);
	b = printf("X is : %X", un);
	printf("\t\treturn: %d\n", b);
	b = printf("x is : %x", un);
	printf("\t\treturn: %d\n", b);
	b = printf("u is : %u", __UINT32_MAX__);
	printf("\treturn: %d\n", b);
	b = printf("s is : %s", "This is a string !");
	printf("\t\treturn: %d\n", b);

	ft_printf("\nft_printf\n");
	b = ft_printf("c is : %c", c);
	ft_printf("\t\treturn: %d\n", b);
	b = ft_printf("p is : %p", z);
	ft_printf("\treturn: %d\n", b);
	b = ft_printf("p is : %p", 0);
	ft_printf("\t\treturn: %d\n", b);
	b = ft_printf("X is : %X", un);
	ft_printf("\t\treturn: %d\n", b);
	b = ft_printf("x is : %x", un);
	ft_printf("\t\treturn: %d\n", b);
	b = ft_printf("u is : %u", __UINT32_MAX__);
	ft_printf("\treturn: %d\n", b);
	b = ft_printf("s is : %s", "This is a string !");
	ft_printf("\t\treturn: %d\n", b);

	printf("\n\nsizeof : %ld\n", sizeof(void *));
	return (0);
}
