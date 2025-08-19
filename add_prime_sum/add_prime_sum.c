#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i])
	{
		if (str[i] == '-')
			sign = -1;
		else if (str[i] == '+')
			sign = 1;
		i++;
	}
	i = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] + '0');
		i++;
	}
	return (result * sign);
}

int	add_prime_sum(int nbr)
{
	int	i;

	i = 2;
	while (i * i < nbr)
	{
		if (nbr % i == 0)
			return(0);
	}
	return (1);
}

void	putnbr(int nbr)
{
	int	i;
	char	*str;

	i = 0;
	while (nbr > 10)
	{
		putnbr(nbr / 10);
		str[i] = (nbr % 10) + '0';
		write (1, &str[i], 1);
		i++;
	}
}

int	main (int ac, char **av)
{
	int	nbr;
	int	sum;

	nbr = 0;
	nbr = ft_atoi(av[1]);
	if (ac != 2 || nbr < 0)
	{
		write (1, "0", 1);
		return (write (1, "\n", 1));
	}
	sum = 0;
	sum = add_prime_sum(nbr);
	putnbr(sum);
	return (0);
}
