/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:22:33 by tfockede          #+#    #+#             */
/*   Updated: 2022/02/02 21:00:42 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	
	The strchr function finds the first occurrence of the byte c (converted to 
	a char) in the string beginning at string. The return value is a pointer to 
	the located byte, or a null pointer if no match was found. If c is set to
	'\0' then the end of string is returned.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if ((char)c == str[i])
			return ((char *)&str[i]);
		i++;
	}
	if ((char)c == 0)
		return ((char *)&str[i]);
	return (0);
}
