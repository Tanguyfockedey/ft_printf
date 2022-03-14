/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:38:52 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/17 15:38:52 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns an array of strings obtained by splitting ’s’ using 
	the character ’c’ as a delimiter. 
	The array must be ended by a NULL pointer.
*/

#include "libft.h"

static size_t	ft_substr_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if ((c == '\0') && s[0])
		return (1);
	if ((c == '\0') && !s[0])
		return (0);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		count++;
		while ((s[i] != c) && (s[i] != '\0'))
			i++;
		while (s[i] == c)
			i++;
	}
	return (count);
}

static char	*ft_next_substr(const char *s, char c, size_t *str_index)
{
	size_t	str_start;
	size_t	str_len;
	char	*str;

	s = &s[*str_index];
	str_start = 0;
	str_len = 0;
	while (s[str_start] == c)
		str_start++;
	while ((s[str_start + str_len] != c) && (s[str_start + str_len] != '\0'))
		str_len++;
	str = ft_substr(s, str_start, str_len);
	*str_index = *str_index + str_start + str_len;
	return (str);
}

static void	*ft_free(char **result, size_t i)
{
	while (i-- > 0)
	{
		free(result[i]);
	}
	free(result);
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char		**result;
	size_t		substr_count;
	size_t		i;
	size_t		str_i;

	if (!s)
		return (0);
	str_i = 0;
	substr_count = ft_substr_count(s, c);
	result = malloc((substr_count + 1) * sizeof(char *));
	if (!result)
		return (0);
	i = 0;
	while (i < substr_count)
	{
		result[i] = ft_next_substr(s, c, &str_i);
		if (!result[i])
			return (ft_free(result, i));
		i++;
	}
	result[substr_count] = NULL;
	return (result);
}
