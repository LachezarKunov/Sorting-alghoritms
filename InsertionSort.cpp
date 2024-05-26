#include <iostream>

void insertionSort(int* arr, unsigned size)
{	
	int key, j;
	for (size_t i = 1; i < size; i++)
	{
		key = arr[i];
		j = i - 1;

		while(j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}
}

void printArr(int* arr, unsigned size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	int arr[5]{ 3,1,8,7,-3 };
	insertionSort(arr, 5);
	printArr(arr, 5);
}

