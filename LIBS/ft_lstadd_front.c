/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:42:28 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/24 13:42:28 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Adds the element ’new’ at the beginning of the list.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
