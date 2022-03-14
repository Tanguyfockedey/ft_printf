/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:33:45 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/24 16:33:45 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Deletes and frees the given element and every successor of that element, 
	using the function ’del’ and free().
	Finally, the pointer to the list must be set to NULL.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if ((*lst)->next)
		ft_lstclear(&(*lst)->next, del);
	ft_lstdelone(*lst, del);
	*lst = 0;
}
