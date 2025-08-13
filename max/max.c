int	max(int* tab, unsigned int len)
{
	unsigned	i;
	int	max;

	if (tab == 0 || len == 0)
		return (0);
	i = 0;
	max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

#include <stdio.h>

int main(void)
{
	// Test 1: array with various positive numbers
	int arr1[] = {2, 5, 1, 9, 3};
	printf("Max of arr1: %d\n", max(arr1, 5)); // Expected: 9

	// Test 2: array with all negatives
	int arr2[] = {-4, -9, -2, -7};
	printf("Max of arr2: %d\n", max(arr2, 4)); // Expected: -2

	// Test 3: array with one element
	int arr3[] = {42};
	printf("Max of arr3: %d\n", max(arr3, 1)); // Expected: 42

	// Test 4: array with all elements equal
	int arr4[] = {5, 5, 5, 5, 5};
	printf("Max of arr4: %d\n", max(arr4, 5)); // Expected: 5

	// Test 5: NULL array pointer
	printf("Max of NULL array: %d\n", max(0, 3)); // Expected: 0

	// Test 6: Zero length
	int arr5[] = {10, 20, 30};
	printf("Max of arr5 with length 0: %d\n", max(arr5, 0)); // Expected: 0

	// Test 7: array with various positive numbers
	int arr6[] = {2, 5, 1, 9, 10};
	printf("Max of arr6: %d\n", max(arr6, 5)); // Expected: 10

	return (0);
}