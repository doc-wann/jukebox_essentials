#ifndef MUSIC_H
# define MUSIC_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <windows.h>
# include <windowsx.h>
# include <mmsystem.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

char	*get_next_line(int fd);
char	*get_line(char *str);
char	*get_buffer(int fd, char *str);
char	*prepare_next_line(char *str);

char	*ft_strjoin(char *s1, char *s2);
int	ft_strlen(const char *s);
int	ft_strchr(char *s, char c);
char	*ft_strdup(const char *src);
int     jukebox(char *msc);

#endif