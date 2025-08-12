char	*ft_strrev(char *str)
{
	int	len;
	int	i;
	char	temp;

	if (str == 0)
		return (0);
	len = 0;
	while (str[len])
		len++;
	len--;
	i = 0;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		len--;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%s" ,ft_strrev(av[1]));
	return (0);
}
