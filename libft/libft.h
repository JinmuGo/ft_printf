/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:55:42 by jgo               #+#    #+#             */
/*   Updated: 2022/10/03 12:16:41 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

char	*ft_itoa_base(size_t n, char *base);
char	*ft_itoa(int n);
int		ft_putstr(char *str);
int		ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int		ft_putchar(int c);

#endif
