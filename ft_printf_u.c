/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:51:52 by jgo               #+#    #+#             */
/*   Updated: 2022/10/03 12:03:10 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf_u(va_list *ap, const char conversion)
{
	const unsigned int	arg = va_arg(*ap, unsigned int);
	const char			*str = ft_itoa_base(arg, BASE_DECIMAL);
	int					rv;

	if (!str || conversion != UNSIGNED_INT)
		return (-1);
	rv = ft_putstr((char *)str);
	free((void *)str);
	return (rv);
}
