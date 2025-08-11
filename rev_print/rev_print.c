#include <unistd.h>

int	ft_size(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	size;

	size = 0;
	if (ac != 2)
		return (0);
	size = ft_size(av[1]);
	while (size != 0)
		write(1, &av[1][--size], 1);
	return (write (1, "\n", 1));
}
