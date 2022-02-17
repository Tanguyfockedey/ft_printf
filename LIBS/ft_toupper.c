/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:35:36 by tfockede          #+#    #+#             */
/*   Updated: 2022/02/03 12:05:29 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	If c is a lower-case letter, toupper returns the corresponding upper-case 
	letter. Otherwise c is returned unchanged.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
