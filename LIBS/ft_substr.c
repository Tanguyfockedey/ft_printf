/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:13:17 by tfockede          #+#    #+#             */
/*   Updated: 2022/02/02 21:01:37 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns a substring from the string ’s’.
	The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(const char *str, size_t start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!str)
		return (0);
	if (len + start > ft_strlen(str))
		len = ft_strlen(str) - start;
	if (start > ft_strlen(str))
	{
		substr = malloc(sizeof(char));
		substr[0] = '\0';
		return (substr);
	}
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (0);
	i = 0;
	while (i < len && str[start + i] != '\0')
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
