#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	long	first_nbr;
	long	second_nbr;
	char	operator;
	long	result;

	first_nbr = 0;
	if (ac != 4)
		return (printf ("\n"));
	first_nbr = atoi(av[1]);
	second_nbr = atoi(av[3]);
	operator = av[2][0];
	if (operator != '+' && operator != '-' && operator != '*' && operator != '/')
		return (printf ("\n"));
	if (operator == '+')
		result = first_nbr + second_nbr;
	if (operator == '-')
		result = first_nbr - second_nbr;
	if (operator == '*')
		result = first_nbr * second_nbr;
	if (operator == '/')
		result = first_nbr / second_nbr;
	if (operator == '%')
		result = first_nbr % second_nbr;
	return (printf("%ld", result));
}
