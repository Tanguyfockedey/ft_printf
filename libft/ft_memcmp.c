/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:27:54 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/11 13:27:54 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function memcmp compares the size bytes of memory beginning at a1 
	against the size bytes of memory beginning at a2. The value returned has 
	the same sign as the difference between the first differing pair of bytes 
	(interpreted as unsigned char objects, then promoted to int).
	If the contents of the two blocks are equal, memcmp returns 0.
*/

#include "libft.h"

int	ft_memcmp(const void *a1, const void *a2, size_t size)
{
	size_t			i;
	int				equals;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)a1;
	s2 = (unsigned char *)a2;
	i = 0;
	if (size < 1)
		return (0);
	while (i < size - 1)
	{
		equals = s1[i] - s2[i];
		if (equals != 0)
			return (equals);
		i++;
	}
	equals = s1[i] - s2[i];
	return (equals);
}
