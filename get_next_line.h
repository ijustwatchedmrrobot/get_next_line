#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		ft_strlen(char *s);
char	*ft_strchr(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
char    *ft_read(int fd, char *buffer);
char    *ft_line(char *buffer);
char    *ft_newline(char *buffer);
char    *get_next_line(int fd);
#endif