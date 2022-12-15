#include "music.h"

int main (void)
{
	int	fd;

	fd = open("test.txt", O_RDONLY);
	jukebox(get_next_line(fd));
}