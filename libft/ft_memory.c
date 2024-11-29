/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvera <bvera@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:18:39 by bvera             #+#    #+#             */
/*   Updated: 2024/10/27 19:18:43 by bvera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mem_area, int value, size_t num_bytes)
{
	unsigned char	*ptr;

	ptr = mem_area;
	while (num_bytes)
	{
		*ptr = (unsigned char)value;
		ptr++;
		num_bytes--;
	}
	return (mem_area);
}

void	ft_bzero(void *mem_area, size_t num_bytes)
{
	ft_memset(mem_area, 0, num_bytes);
}

void	*ft_memcpy(void *dest_area, const void *src_area, size_t num_bytes)
{
	unsigned char		*d;
	const unsigned char	*s;

	s = src_area;
	d = dest_area;
	if (!d && !s)
		return (NULL);
	while (num_bytes != 0)
	{
		*d = *s;
		d++;
		s++;
		num_bytes--;
	}
	return (dest_area);
}

void	*ft_memmove(void *dest, const void *src, size_t num_bytes)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;

	if (dest == 0 && src == 0)
		return (dest);
	dest_ptr = dest;
	src_ptr = src;
	if (src > dest)
		ft_memcpy(dest, src, num_bytes);
	else if (src < dest)
	{
		while (num_bytes > 0)
		{
			*(dest_ptr + (num_bytes - 1)) = *(src_ptr + (num_bytes - 1));
			num_bytes--;
		}
	}
	return (dest);
}

void	*ft_memchr(const void *mem_area, int chr, size_t num_bytes)
{
	const unsigned char	*ptr;

	ptr = mem_area;
	while (num_bytes--)
	{
		if (*ptr == (unsigned char)chr)
		{
			return ((void *)ptr);
		}
		ptr++;
	}
	return (NULL);
}
