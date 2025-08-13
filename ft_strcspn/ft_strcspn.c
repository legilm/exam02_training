int	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	printf("%d", ft_strcspn(av[1], av[2]));
	return (0);
}
