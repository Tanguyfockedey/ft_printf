/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:50:22 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/18 15:50:22 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Applies the function ’f’ to each character of the string ’s’, and passing 
	its index as first argument to create a new string (with malloc) resulting 
	from successive applications of ’f’.
*/

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	strlen;
	char	*string;

	if (!s || !(*f))
		return (0);
	i = 0;
	strlen = ft_strlen(s);
	string = malloc((strlen + 1) * sizeof(char));
	if (!string)
		return (0);
	while (i < strlen)
	{
		string[i] = (*f)(i, s[i]);
		i++;
	}
	string[strlen] = '\0';
	return (string);
}
