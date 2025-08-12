#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	char	*result;

	i = 0;
	while (src[i])
		i++;
	result = (char *)malloc((i + 1) * sizeof(char *));
	if (!result)
		return (0);
	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	return (result);
}

#include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	printf("%s\n", ft_strdup(av[1]));
	printf("%s\n", strdup(av[1]));
	return (0);
}