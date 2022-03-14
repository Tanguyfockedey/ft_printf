/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:48:03 by tfockede          #+#    #+#             */
/*   Updated: 2022/02/02 21:01:30 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns a copy of ’s1’ with the characters specified in ’set’
	removed from the beginning and the end of the string.
*/

#include "libft.h"

static size_t	ft_pretrim(const char *str, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[i])
	{
		if (set[i] == str[j])
		{
			j++;
			i = 0;
			continue ;
		}
		i++;
	}
	return (j);
}

static size_t	ft_endtrim(const char *str, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(str);
	i = 0;
	j = len;
	while (set[i] && j)
	{
		if (set[i] == str[j - 1])
		{
			j--;
			i = 0;
			continue ;
		}
		i++;
	}
	return (len - j);
}

static char	*ft_copy(const char *str, size_t len)
{
	char	*string;
	size_t	i;

	string = malloc((len + 1) * sizeof(char));
	if (!string)
		return (0);
	i = 0;
	while (i < (len))
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	*ft_strtrim(const char *s, const char *set)
{
	char	*string;
	size_t	pretrim;
	size_t	endtrim;
	size_t	len;

	if (!s)
		return (0);
	if (!set)
		return (ft_strdup(s));
	len = ft_strlen(s);
	pretrim = ft_pretrim(s, set);
	endtrim = ft_endtrim(s, set);
	if (pretrim + endtrim >= len)
		string = ft_strdup("");
	else
		string = ft_copy(&s[pretrim], len - pretrim - endtrim);
	return (string);
}
