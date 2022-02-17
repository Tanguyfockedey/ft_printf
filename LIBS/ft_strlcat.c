/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:39:17 by tfockede          #+#    #+#             */
/*   Updated: 2022/02/01 16:54:49 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strlcat() function concatenates strings. It is designed to be safer, 
	more consistent, and less error prone replacements for strncat(). 
	Unlike this function, strlcat() takes the full size of the buffer (not just 
	the length) and guarantee to NUL-terminate the result (as long as there is 
	at least one byte free in dst). 
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	result;

	if (!size)
		return (ft_strlen(src));
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	else
		result = ft_strlen(dest) + ft_strlen(src);
	i = ft_strlen(dest);
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (result);
}
