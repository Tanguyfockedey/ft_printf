/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:15:11 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/06 17:15:11 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The memcpy function copies size bytes from the object beginning at from 
	into the object beginning at to. The behavior of this function is undefined
	if the two arrays to and from overlap.
*/

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t size)
{
	char	*tmp_from;
	char	*tmp_to;
	size_t	i;

	if (to == from)
		return (to);
	i = 0;
	tmp_to = (char *) to;
	tmp_from = (char *) from;
	while (i < size)
	{
		tmp_to[i] = tmp_from[i];
		i++;
	}
	return (to);
}
