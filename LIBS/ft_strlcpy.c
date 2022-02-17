/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:19:58 by tfockede          #+#    #+#             */
/*   Updated: 2022/02/01 16:55:19 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strlcpy() function copies strings. It is designed to be safer, more 
	consistent, and less error prone replacements for strncpy(). Unlike this 
	function, strlcpy() takes the full size of the buffer (not just the length) 
	and guarantee to NUL-terminate the result (as long as size is larger 
	than 0).
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size < 1)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
