/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvera <bvera@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:21:09 by bvera             #+#    #+#             */
/*   Updated: 2024/10/27 19:21:12 by bvera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

// ft_character
int			ft_isalpha(int chr);
int			ft_isdigit(int dig);
int			ft_isalnum(int alnum);
int			ft_isascii(int ascii);
int			ft_isprint(int print);

// ft_string
size_t		ft_strlen(const char *str);
char		*ft_strchr(const char *str, int chr);
char		*ft_strrchr(const char *str, int chr);
int			ft_strncmp(const char *str1, const char *str2, size_t num);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);

// ft_memory
void		*ft_memset(void *mem_area, int value, size_t num_bytes);
void		ft_bzero(void *mem_area, size_t num_bytes);
void		*ft_memcpy(void *dest_area, const void *src_area, size_t num_bytes);
void		*ft_memmove(void *dest, const void *src, size_t num_bytes);
void		*ft_memchr(const void *mem_area, int chr, size_t num_bytes);

// ft_memory_two
int			ft_memcmp(const void *ptr1, const void *ptr2, size_t num_bytes);

// ft_string_manipulation
size_t		ft_strlcpy(char *dest_area, const char *src_area, size_t max_size);
size_t		ft_strlcat(char *dest_area, const char *src_area, size_t max_size);

// ft_conversion
int			ft_toupper(int chr);
int			ft_tolower(int chr);
int			ft_atoi(const char *str_num);
char		*ft_strdup(const char *str);

// ft_memory_managment
void		*ft_calloc(size_t num_elements, size_t element_size);

// ft_string_creation
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_itoa(int n);

// ft_string_creation_split
char		**ft_split(const char *s, char c);

// ft_string_transformation
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

// ft_io_functions
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

#endif
