#include <unistd.h>

int	main(int ac, char **av)
{
	int	c;
	int	i;

	i = 0;
	if (ac != 4)
		return (write (1, "\n", 1));
	while (av[1][i])
	{
		c = av[1][i];
		if (av[2][0] == c)
		{
			c = av[3][0];
			write (1, &c, 1);
		}
		else
			write (1, &c, 1);
		i++;
	}
	return (write (1, "\n", 1), 0);
}