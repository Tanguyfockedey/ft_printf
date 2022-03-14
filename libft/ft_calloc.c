/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:33:09 by tfockede          #+#    #+#             */
/*   Updated: 2022/02/02 20:57:47 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	This function allocates a block long enough to contain a vector of count 
	elements, each of size eltsize. Its contents are cleared to zero before 
	calloc returns.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*block;
	size_t	range;

	range = count * size;
	if (!range)
		range = 1;
	block = malloc(range);
	if (!block)
		return (0);
	ft_bzero(block, range);
	return ((void *)block);
}
