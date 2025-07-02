#include <unistd.h>

int	ft_readline(char *buf, int size)
{
	int	i = 0;
	char	c;
	int	ret;

	while (i < size - 1)
	{
		ret = read(0, &c, 1);
		if (ret <= 0)
			break;
		if (c == '\n')
			break;
		buf[i++] = c;
	}
	buf[i] = '\0';
	return (i);
}
