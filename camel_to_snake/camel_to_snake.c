#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	char	*str;
	int		count;

	count = 0;
	if (ac != 2)
		return (write (1, "\n", 1));
	while (av[1][count])
		count++;
	str = (char *)malloc((count + 1) * sizeof (char *));
	if (!str)
		return (write (1, "\n", 1), 0);
	i = 0;
	while (av[1][i])
	{
		str[i] = av[1][i];
		i++;
	}
	str[i] = '\0';
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			write(1, "_", 1);
			str[i] += 32;
			write (1, &str[i], 1);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
	free (str);
	return (write (1, "\n", 1), 0);
}