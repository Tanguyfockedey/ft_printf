/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:57:05 by tfockede          #+#    #+#             */
/*   Updated: 2022/02/02 21:00:53 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns a new string, which is the result of the 
	concatenation of ’s1’ and ’s2’.
*/

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*string;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	string = malloc(len * sizeof(char));
	if (!string)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		string[i + j] = s2[j];
		j++;
	}
	string[i + j] = '\0';
	return (string);
}
