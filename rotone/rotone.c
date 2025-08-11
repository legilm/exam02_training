#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	char	c;

	i = 0;
	if (ac != 2)
		return (write (1, "\n", 1), 0);
	while (av[1][i])
	{
		if (av[1][i] >= 'A' && av[1][i] <= 'Y')
		{
			c = av[1][i] + 1;
			write (1, &c, 1);
		}
		else if (av[1][i] == 'Z')
			write (1, "A", 1);
		else if (av[1][i] >= 'a' && av[1][i] <= 'y')
		{
			c = av[1][i] + 1;
			write (1, &c, 1);
		}
		else if (av[1][i] == 'z')
			write (1, "a", 1);
		else
			write (1, &av[1][i], 1);
		i++;
	}
	return (write (1, "\n", 1), 0);
}