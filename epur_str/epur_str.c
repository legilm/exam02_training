#include <unistd.h>

int	epur_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] || str[i] != '\t' || str[i] != ' ')
			write (1, &str[i], 1);
		else if (str[i] == '\t' || str[i] == ' ')
			write (1, " ", 1);
		i++;
	}
	str[i] = '\0';
	return (write (1, "\n", 1), 0);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (write (1, "\n", 1));
	epur_str(av[1]);
	return (0);
}