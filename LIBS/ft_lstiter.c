/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:58:21 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/25 16:58:21 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Iterates the list ’lst’ and applies the function ’f’ to the content of 
	each element.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
