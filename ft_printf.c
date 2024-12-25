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

int	ft_printf_percentage(va_list ap)
{
	(void)ap;
	return (write(1, "%", 1));
}

void	declare_structure(t_format_map *dispatch_table)
{
	dispatch_table[0].format = 'c';
	dispatch_table[0].function = ft_printf_char;
	dispatch_table[1].format = 's';
	dispatch_table[1].function = ft_printf_string;
	dispatch_table[2].format = 'p';
	dispatch_table[2].function = ft_printf_hexa;
	dispatch_table[3].format = 'd';
	dispatch_table[3].function = ft_print_decimal;
	dispatch_table[4].format = 'i';
	dispatch_table[4].function = ft_print_decimal;
	dispatch_table[5].format = 'u';
	dispatch_table[5].function = ft_print_unsigned;
	dispatch_table[6].format = 'x';
	dispatch_table[6].function = ft_print_hexa_minus;
	dispatch_table[7].format = 'X';
	dispatch_table[7].function = ft_print_hexa_mayus;
	dispatch_table[8].format = '%';
	dispatch_table[8].function = ft_printf_percentage;
	dispatch_table[9].format = '\0';
	dispatch_table[9].function = NULL;
}

int	ft_printf_logic(const char *text, va_list list)
{
	int				i;
	t_format_map	dispatch_table[10];

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
