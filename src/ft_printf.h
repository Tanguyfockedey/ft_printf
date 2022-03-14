/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:09:39 by tfockede          #+#    #+#             */
/*   Updated: 2022/02/17 15:09:39 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

int	ft_printf(const char *format, ...);
int ft_spec_char(char c);
int	ft_spec_string(char *string);
int	ft_spec_pointer(void *p);
int	ft_spec_decimal(int n);
int	ft_spec_unsigned(unsigned int un);
int	ft_spec_hexalower(unsigned int un);
int	ft_spec_hexaupper(unsigned int un);
int	ft_putunbr_base(unsigned int nb, char *base);



#endif
