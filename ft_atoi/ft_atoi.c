#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	long	nbr;
	int	sign;

	i = 0;
	sign = 1;
	nbr = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr * sign);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	long	result;

	i = 0;
	if (ac != 2 || av[1] == NULL)
		return (write (1, "\n", 1));

	result = ft_atoi(av[1]);
	printf("%ld\n", result);
	return (0);
}
