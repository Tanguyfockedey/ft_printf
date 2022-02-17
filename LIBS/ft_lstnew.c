/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:20:49 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/20 19:20:49 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns a new element. The variable ’content’ is initialized
	with the value of the parameter ’content’. The variable ’next’ is 
	initialized to NULL.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cell;

	cell = malloc(sizeof(t_list));
	if (!cell)
		return (0);
	cell->content = content;
	cell->next = 0;
	return (cell);
}
