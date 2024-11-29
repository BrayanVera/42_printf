/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_character.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvera <bvera@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:15:18 by bvera             #+#    #+#             */
/*   Updated: 2024/10/27 19:15:33 by bvera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

int	ft_printf(char const *text, ...);

int	ft_printf_char(va_list ap);

typedef int	(*t_format_func)(va_list ap);

typedef struct t_format_map
{
	char			format;
	t_format_func	function;
}	t_format_map;

#endif