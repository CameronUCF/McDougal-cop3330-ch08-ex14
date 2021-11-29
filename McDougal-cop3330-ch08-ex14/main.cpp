#include "main.h"

int main()
{
	printf("Add: 5 + 5 = %d\n", add(5,5));

	int arr[5] = { 1,2,3,4,5 };
	PrintArray(arr, 5);
	PrintAtIndex(arr, 2);

	return 0;
}

int add(const int a, const int b)
{
	return a + b;
}

void PrintArray(const int arr[], const int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", arr[i]);
}

void PrintAtIndex(const int arr[], const int index)
{
	printf("[%d]: %d\n", index, arr[index]);
}