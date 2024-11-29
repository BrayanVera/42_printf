/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvera <bvera@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:20:38 by bvera             #+#    #+#             */
/*   Updated: 2024/10/27 19:20:41 by bvera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strchr(const char *str, int chr)
{
	while (*str)
	{
		if (*str == (char)chr)
			return ((char *)str);
		str++;
	}
	if (*str == (char)chr)
		return ((char *) str);
	return (NULL);
}

char	*ft_strrchr(const char *str, int chr)
{
	const char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == (char)chr)
		{
			last = str;
		}
		str++;
	}
	if (*str == (char)chr)
		return ((char *) str);
	return ((char *)last);
}

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	while ((num && *str1) && (*str1 == *str2))
	{
		str1++;
		str2++;
		num--;
	}
	if (num)
		return (*(unsigned char *)str1 - *(unsigned char *)str2);
	else
		return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
	{
		return ((char *)haystack);
	}
	while (*haystack && (len >= needle_len))
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
		{
			return ((char *)haystack);
		}
		len--;
		haystack++;
	}
	return (NULL);
}
