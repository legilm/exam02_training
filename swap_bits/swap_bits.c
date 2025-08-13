unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

#include <stdio.h>

int main(void)
{
	unsigned char test_values[] = {0x12, 0xAB, 0x00, 0xFF, 0x41};
	unsigned char swapped;
	int i = 0;

	// Test multiple values in the array
	while (i < 5)
	{
		swapped = swap_bits(test_values[i]);

		printf("Original: 0x%X, Swapped: 0x%X\n", test_values[i], swapped);
		i++;
	}

	return 0;
}