#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write (1, &bit, 1);
	}
}

int	main(int ac, char **av)
{
	print_bits(5);
	write (1, "\n", 1);
	print_bits(6);
	write (1, "\n", 1);
	print_bits(8);
	write (1, "\n", 1);
	print_bits(20);
	write (1, "\n", 1);
	print_bits(255);
	write (1, "\n", 1);
	print_bits(192);
	write (1, "\n", 1);
	return (0);
}