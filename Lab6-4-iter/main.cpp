#include "main.hpp"

void task1_1(double* arr, int size, double* maxArr)
{
	if (!arr || !maxArr)
		return;

	*maxArr = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > *maxArr)
		{
			*maxArr = arr[i];
		}
	}
}

void task1_2(double* arr, int size, double* sum)
{
	if (!arr || !sum)
		return;

	double* pLastPositive = NULL;

	for (int i = size - 1; i >= 0; i--)
	{
		if (arr[i] > 0)
		{
			pLastPositive = &arr[i];
			break;
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (pLastPositive && pLastPositive == &arr[i])
		{
			break;
		}
		*sum += arr[i];
	}
}

void task2(double* arr, int size, int a, int b)
{
	if (!arr)
		return;

	int i = 0;
	while (i < size)
	{
		if ((abs(arr[i]) >= a) && (abs(arr[i]) <= b))
		{
			moveLeftArray(arr, size, i + 1);
			continue;
		}
		i++;
	}
}

int main()
{
	srand(time(NULL));

	double *a;
	int size = 0, min = 0, max = 0;
	double maxArr = 0.0, sum = 0.0;

	std::cout << "Enter array size: ";
	std::cin >> size;
	std::cout << "Enter min value: ";
	std::cin >> min;
	std::cout << "Enter max value: ";
	std::cin >> max;

	a = new double[size];

	initArr(a, size, min - 30, max + 30);
	printArr(a, size);
	task1_1(a, size, &maxArr);
	task1_2(a, size, &sum);
	std::cout << "Max in arr: " << maxArr << std::endl;
	std::cout << "Sum: " << sum << std::endl;
	
	task2(a, size, min, max);
	printArr(a, size);

	delete[] a;
	return 0;
}
