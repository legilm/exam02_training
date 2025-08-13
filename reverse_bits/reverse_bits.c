#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	unsigned char	bit;

	i = 0;
	while (i < 8)
	{
		bit = (octet >> i & 1) + '0';
		write (1, &bit, 1);
		i++;
	}
	return (bit);
}

int	main(int ac,char **av)
{
	reverse_bits(5);
	write (1, "\n", 1);
	reverse_bits(6);
	write (1, "\n", 1);
	reverse_bits(8);
	write (1, "\n", 1);
	reverse_bits(20);
	write (1, "\n", 1);
	reverse_bits(255);
	write (1, "\n", 1);
	reverse_bits(192);
	write (1, "\n", 1);
	return (0);
}