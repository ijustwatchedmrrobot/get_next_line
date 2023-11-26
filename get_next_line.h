#ifndef GET_NEXT_LINE.H
# define GET_NEXT_LINE.H

# define <stdlib.h>
# define <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		ft_strlen(char *s);
char	*ft_strchr(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
#endif