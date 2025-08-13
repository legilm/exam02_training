#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	used[128] = {0};

	if (ac != 3)
		return (write (1, "\n", 1));
	i = 0;
	while (av[1][i])
	{
		if (!used[(int)av[1][i]])
		{
			write (1, &av[1][i], 1);
			used[(int)av[1][i]] = 1;
		}
		i++;
	}
	j = 0;
	while (av[2][j])
	{
		if (!used[(int)av[2][j]])
		{
			write (1, &av[2][j], 1);
			used[(int)av[2][j]] = 1;
		}
		j++;
	}
	write (1, "\n", 1);
}
