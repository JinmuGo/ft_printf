/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 05:44:53 by jgo               #+#    #+#             */
/*   Updated: 2022/12/28 14:55:12 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	func_confirm(va_list *ap, const char conversion)
{
	const t_funcptr	fp[8] = {ft_printf_c, ft_printf_s, ft_printf_p, \
		ft_printf_d, ft_printf_d, ft_printf_u, ft_printf_x, ft_printf_x};
	const int		func_index = ft_strchr(CONVERSION_LIST, conversion);

	if (func_index == -1)
		return (-1);
	return (fp[func_index](ap, conversion));
}

static	int	process_str(va_list *ap, const char *format)
{
	int	return_val;
	int	add_val;
	int	iter;

	return_val = 0;
	iter = 0;
	while (format[iter])
	{
		if (format[iter] == '%')
		{
			if (format[iter + 1] == '%')
				add_val = ft_putchar('%');
			else
				add_val = func_confirm(ap, format[iter + 1]);
			iter += 1;
		}
		else
			add_val = ft_putchar(format[iter]);
		if (add_val == -1)
			return (-1);
		return_val += add_val;
		iter++;
	}
	return (return_val);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			return_val;

	va_start(ap, format);
	return_val = process_str(&ap, format);
	va_end(ap);
	return (return_val);
}
