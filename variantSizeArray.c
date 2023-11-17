#include <stdio.h>
#include<vector>

int main(void)
{
	int size = 0;
	printf("input size: ");
	std::cin >> size;
	std::vector<int> array(size);

	for (int i = 0; i < size; ++i) {
		array[i] = i + 1;
	}

	for (int i = 0; i < size; ++i) {
		printf("%d ", array[i]);
	}

	printf("\n");

	return 0;
}
