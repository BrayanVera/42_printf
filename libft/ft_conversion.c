/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvera <bvera@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:16:20 by bvera             #+#    #+#             */
/*   Updated: 2024/10/27 19:16:29 by bvera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int chr)
{
	if (chr >= 'a' && chr <= 'z')
		return (chr - ('a' - 'A'));
	return (chr);
}

int	ft_tolower(int chr)
{
	if (chr >= 'A' && chr <= 'Z')
		return (chr + ('a' - 'A'));
	return (chr);
}

int	ft_atoi(const char *str_num)
{
	int		sign;
	long	result;

	result = 0;
	sign = 1;
	while (*str_num == ' ' || (*str_num >= 9 && *str_num <= 13))
		str_num++;
	if (*str_num == '-' || *str_num == '+')
	{
		if (*str_num == '-')
			sign = -1;
		str_num++;
	}
	while (*str_num >= '0' && *str_num <= '9')
	{
		result = (result * 10) + (*str_num - '0');
		str_num++;
	}
	return ((int)(result * sign));
}

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*dup_str;

	len = ft_strlen(str);
	dup_str = ft_calloc(len + 1, sizeof(char));
	if (dup_str == NULL)
		return (NULL);
	ft_memcpy(dup_str, str, len);
	return (dup_str);
}
