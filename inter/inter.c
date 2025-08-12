#include <unistd.h>

int	main(int ac, char**av)
{
	int	i;
	int	j;
	int	filled[128] = {0};

	if (ac != 3)
		return (write (1, "\n", 1));
	i = 0;
	while (av[1][i])
	{
		j = 0;
		while (av[2][j])
		{
			if ((av[1][i] == av[2][j]) && !filled[(int)av[2][j]])
			{
				write (1, &av[1][i], 1);
				filled[(int)av[2][j]] = 1;
			}
			j++;
		}
		i++;
	}
	return (write (1, "\n", 1));
}