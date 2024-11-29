/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_manipulation.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvera <bvera@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:19:56 by bvera             #+#    #+#             */
/*   Updated: 2024/10/27 19:19:58 by bvera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest_area, const char *src_area, size_t max_size)
{
	size_t	src_len;
	size_t	to_copy;

	src_len = ft_strlen(src_area);
	if (max_size == 0)
		return (src_len);
	if (src_len >= max_size)
		to_copy = max_size - 1;
	else
		to_copy = src_len;
	ft_memcpy(dest_area, src_area, to_copy);
	dest_area[to_copy] = '\0';
	return (src_len);
}

size_t	ft_strlcat(char *dest_area, const char *src_area, size_t max_size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	aux;

	d_len = ft_strlen(dest_area);
	s_len = ft_strlen(src_area);
	aux = 0;
	if (max_size <= d_len)
		return (s_len + max_size);
	else
		s_len += d_len;
	while (src_area[aux] && d_len < max_size - 1)
	{
		dest_area[d_len] = src_area[aux];
		d_len++;
		aux++;
	}
	dest_area[d_len] = '\0';
	return (s_len);
}
