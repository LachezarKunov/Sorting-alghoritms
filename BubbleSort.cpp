#include <iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void bubbleSort(int* arr, unsigned size) 
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j]) 
			{
				swap(arr[i], arr[j]);
			}
		}
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
	int arr[10]{ 3,6,1,9,9,11,7,8,2,3 };
	bubbleSort(arr, 10);
	std::cout << std::endl;
	printArr(arr, 10);
}

