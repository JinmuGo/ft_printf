/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:25:14 by jgo               #+#    #+#             */
/*   Updated: 2022/10/05 15:11:19 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf_p(va_list *ap, const char conversion)
{
	const unsigned long		arg = (unsigned long)va_arg(*ap, void *);
	const char				*str = ft_itoa_base(arg, BASE_HEXA_LOWER);
	int						rv;

	if (!str || conversion != POINTER)
		return (-1);
	rv = ft_putstr("0x") + ft_putstr((char *)str);
	free((void *)str);
	return (rv);
}
