#include "get_next_line.h"

char    *ft_read(int fd, char *buffer)
{
    char    *str;
    int     bytes_read;

    bytes_read = 1;
    str = malloc(BUFFER_SIZE + 1);
    if (!str)
        return (str);
    while (!ft_strchr(buffer, '\n') && bytes_read != 0)
    {
        bytes_read = read(fd, str, BUFFER_SIZE);
        if (bytes_read == -1)
        {
            free(str);
            free(buffer);
            return (0);
        }
        *(str + bytes_read) = '\0';
        buffer = ft_strjoin(buffer, str);
    }
    free(str);
    return (buffer);
}

char    *ft_line(char *buffer)
{
    int     i;
    char    *str;

    i = 0;
    if (*buffer == '\0')
        return (NULL);
    while (*(buffer + i) && *(buffer + i) != '\n')
        i++;
    if (*(buffer + i) == '\n')
        str = malloc(i + 2);
    else
        str = malloc(i + 1);
    if (str == NULL)
        return (NULL);
    i = 0;
    while (*(buffer + i) && *(buffer + i) != '\n')
        *(str + i) = *(buffer + i++);
    if (*(buffer + i) == '\n')
        *(str + i++) = '\n';
    *(str + i) = '\0';
    return (str);
}

