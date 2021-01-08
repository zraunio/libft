/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:01:21 by zraunio           #+#    #+#             */
/*   Updated: 2021/01/07 12:25:53 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFF_SIZE 8
# define FD_SIZE 4096

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** ascii
*/
int					ft_isprint(int c);
int					ft_ispunct(int c);
int					ft_isspace (int c);
int					ft_isdigit(int n);
int					ft_isascii(int n);
int					ft_isalpha(int n);
int					ft_isalnum(int n);
/*
** math and counting
*/
size_t				ft_abs(long int value);
float				ft_float_abs(float value);
int					ft_wdcounter(char const *str, char c);
int					dig_count_base(unsigned long int nb, unsigned long int base);
int					ft_count_digit(unsigned long int nb);
/*
** convertions
*/
char				*ft_itoa(int n);
int					ft_atoi(const char *str);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_itoa_base(unsigned long int nb, unsigned long int base);
char				*ft_lutoa_base(unsigned long int nb, unsigned long int base);
char				*ft_lutoa(unsigned long int nb);
char				*ft_utoa(unsigned long int n);
char				*ft_utoa_base(unsigned long int nb, unsigned long int base);
/*
** list
*/
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
/*
** memory
*/
void				ft_memdel(void **ap);
void				*ft_memalloc(size_t size);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_realloc(void *ptr, size_t size);
void				ft_bzero(void *s, size_t n);
/*
** memory
*/
int					get_next_line(const int fd, char **line);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr(int nb);
void				ft_putnbr_fd(int n, int fd);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
/*
** string manipulation
*/
char				*ft_strtrim(char const *s);
char				*ft_strctrim(char const *s, char c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strnew(size_t size);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
int					ft_strequ(char const *s1, char const *s2);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strchr(const char *s, int c);
char				*ft_strnstr(const char *stack, const char *ndle, size_t i);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strdup(const char *src);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strrchr(const char *s, int c);
char				*ft_strncpy(char *dest, const char *src, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlen(const char *str);
size_t				ft_strlcat(char *dest, const char *src, size_t n);
char				*ft_strcpy(char *dest, const char *src);
int					ft_strcmp(const char *s1, const char *s2);

#endif
