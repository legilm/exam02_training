# include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		write (1, &str[i++], 1);
	write (1, "\n", 1);
}

int	main(int ac, char **av)
{
	if(ac != 2)
		return (0);
	else
		ft_putstr(av[1]);
	return(0);
}