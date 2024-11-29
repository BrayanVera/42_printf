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

#include "../includes/ft_printf.h"

int	ft_isascii(int ascii)
{
	return (ascii >= 0 && ascii <= 127);
}

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

int	ft_printf_char(va_list list)
{
	return (ft_putchar(va_arg(list, int)));
}
