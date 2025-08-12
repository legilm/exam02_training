int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	if ((n & (n -1)) == 0)
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n" ,is_power_of_2(0));
	printf("%d\n" ,is_power_of_2(2));
	printf("%d\n" ,is_power_of_2(4));
	printf("%d\n" ,is_power_of_2(8));
	printf("%d\n" ,is_power_of_2(10));
	return (0);
}
