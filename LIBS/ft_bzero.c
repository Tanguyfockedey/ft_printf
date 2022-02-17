/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:05:03 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/06 17:05:03 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	This function copies the value "0" into	each of the first size bytes of the 
	object beginning at block.
*/

#include "libft.h"

void	ft_bzero(void *block, size_t size)
{
	char	*ptr;

	ptr = (char *)block;
	while (size-- > 0)
		*ptr++ = 0;
}
