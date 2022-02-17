/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:31:45 by tfockede          #+#    #+#             */
/*   Updated: 2022/02/02 21:01:21 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strncmp function compares the size first bytes of string s1 against s2, 
	returning a value that has the same sign as the difference between the 
	first differing pair of bytes (interpreted as unsigned char objects, then 
	promoted to int).
	If the two strings are equal, strncmp returns 0.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;
	int		equals;

	i = 0;
	if (size < 1)
		return (0);
	while (s1[i] != '\0' && i < size - 1)
	{
		equals = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (equals != 0)
			return (equals);
		i++;
	}
	equals = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (equals);
}
