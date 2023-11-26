#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while(*(s + i))
		i++;
	return (i)
}
char	*ft_strchr(char *s, char c)
{
	if (s == NULL || c == '\0')
		return (NULL);
	while(*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0;)
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ret;
	
	ret = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ret == NULL)
		return (ret);
	while(*s1)
	{
		*ret = *s1;
		s1++;
		ret++;
	}
	while (*s2)
	{
		*ret = *s2;
		s2++;
		ret++;
	}
	*ret = '\0';
	return (ret);
}