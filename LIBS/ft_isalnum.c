/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:15:08 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/05 15:15:08 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns true (1) if c is an alphanumeric character (a letter or number).
*/

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
