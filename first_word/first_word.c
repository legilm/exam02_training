#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
		return (write (1, "\n", 1));
	while (av[1][i] >= 0 && av[1][i] <= 32)
		i++;
	while(av[1][i] || av[1][i] >= 0 && av[1][i] <= 32)
	{
		write (1, &av[1][i], 1);
		i++;
	}
	return (write (1, "\n", 1));
}