#ifndef LIBFT_H
#define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>
# include "libft.h"

void			*ft_bzero(void *pointer, size_t n);
void			*ft_calloc( size_t elCount, size_t elSize);
int				ft_strlen(char *str);
char			*ft_strdup( const char *source );
char			*ft_strchr(const char	*string, int searchCh);
char			*ft_strrchr(const char *string, int searchedCh);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
void			*ft_memchr(const void *memBlock, int srchChar, size_t size);
int				ft_tolower(int ch);
int				ft_toupper(int ch);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t			ft_strlcpy(char *dest, char *src, size_t size);
size_t			ft_strlcat(char *dest, char *src, size_t size);
void			*ft_memset(void *pointer, int value, size_t count);
void 			*ft_memcpy(void *dest, const void *src, size_t size);
void 			*ft_memmove(void *dest, const void *src, size_t size);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_isprint(int ch);
int				ft_isdigit(int ch);
int				ft_isascii(int c);
int				ft_isalpha(int ch);
int				ft_isalnum(int ch);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char 			*ft_strtrim(char const *s1, char const *set);
char 			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void 			ft_putchar_fd(char c, int fd);
void 			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void 			ft_putnbr_fd(int n, int fd);
int				ft_atoi(char *str);

#endif