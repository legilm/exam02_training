#include <unistd.h>

int	is_space(c)
{
	return (c == '\t' || c == ' ');
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
		return (0);
	while (av[1][i])
		i++;
	i--;
	while (i >= 0 && is_space(av[1][i]))
		i--;
	while (i >= 0 && !(is_space(av[1][i])))
		i--;
	i++;
	while (av[1][i] && !is_space(av[1][i]))
	{
		write (1, &av[1][i], 1);
		i++;
	}
	return (0);
}
