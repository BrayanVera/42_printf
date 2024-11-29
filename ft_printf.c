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

#include "includes/ft_printf.h"

void	declare_structure(t_format_map *dispatch_table)
{
	dispatch_table[0].format = 'c';
	dispatch_table[0].function = ft_printf_char;
	dispatch_table[1].format = '\0';
	dispatch_table[1].function = NULL;
}

int	ft_printf_logic(const char *text, va_list list)
{
	int				i;
	t_format_map	dispatch_table[2];

	declare_structure(dispatch_table);
	i = 0;
	while (dispatch_table[i].format)
	{
		if (dispatch_table[i].format == *text)
			return (dispatch_table[i].function(list));
		i++;
	}
	return (-1);
}

int	ft_printf(char const *text, ...)
{
	va_list	list;
	int		res;

	res = 0;
	va_start(list, text);
	while (*text)
	{
		if (*text == '%')
			res += ft_printf_logic(++text, list);
		else
			res += write(1, text, 1);
		text++;
	}
	va_end(list);
	return (res);
}
