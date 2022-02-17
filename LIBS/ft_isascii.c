/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:41:18 by tfockede          #+#    #+#             */
/*   Updated: 2022/01/05 15:41:18 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns true (1) if c is a 7-bit unsigned char value that fits into the 
	US/UK ASCII character set.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
