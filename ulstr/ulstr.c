#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	c;

	i = 0;
	if (ac != 2)
		return (write (1, "\n", 1));
	while (av[1][i])
	{
		if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			c = av[1][i] + 32;
		else if (av[1][i] >= 'a' && av[1][i] <= 'z')
			c = av[1][i] - 32;
		else
			c = av[1][i];
		write (1, &c, 1);
		i++;
	}
	return (write (1, "\n", 1), 0);
}