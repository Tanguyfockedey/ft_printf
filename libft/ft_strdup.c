/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:33:22 by tfockede          #+#    #+#             */
/*   Updated: 2022/02/02 21:00:46 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	This function copies the string s into a newly allocated string. The string 
	is allocated using malloc. If malloc cannot allocate space for the new 
	string, strdup returns a null pointer. Otherwise it returns a pointer to 
	the new string.
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	length;
	size_t	i;

	length = ft_strlen(s);
	dest = malloc((length + 1) * sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	while (i < length)
	{
		dest[i] = s[i];
		i++;
	}
	dest[length] = '\0';
	return (dest);
}
