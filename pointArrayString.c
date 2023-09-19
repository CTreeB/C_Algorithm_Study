#include<stdio.h>

void printStringArray1(char (*arr)[20], int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%s\n", &arr[i][0]); //arr[i]
	}

}

void printStringArray2(char **arr, int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%s\n", arr[i]);	//&arr[i][0]
	}

}




int main(void)
{
	char cities1[][20] = {
		"seoul", "Los Angeles", "Rio de janeiro", "moscow", "paris"
	};

	printStringArray1(cities1, 5);
	
	char *cities2[] = {
		"seoul", "Los Angeles", "Rio de janeiro", "moscow", "paris"
	};

	printStringArray1(cities1, 5);
	return 0;
}
