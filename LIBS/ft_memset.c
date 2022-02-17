/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:26:03 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/06 15:26:03 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	This function copies the value of c (converted to an unsigned char) into 
	each of the first size bytes of the object beginning at block. It returns 
	the value of block.
*/

#include "libft.h"

void	*ft_memset(void *block, int c, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = block;
	while (size-- > 0)
	{
		ptr[i++] = c;
	}
	return (block);
}
