#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>

void initArr(double* arr, int size, int min, int max)
{
	if (!arr)
		return;

	for (int i = 0; i < size; i++)
	{
		arr[i] = (rand() % ((max + 1) - min) + min) + (rand() % 100 / 100.0);
	}
}

void printArr(double* arr, int size)
{
	if (!arr)
		return;

	std::cout << "[ ";
	for (int i = 0; i < size; i++)
	{
		std::cout << std::setw(6) << arr[i];
		if (i < size - 1)
		{
			std::cout << ", ";
		}
		else
		{
			std::cout << " ]" << std::endl;
		}
	}
}

void moveLeftArray(double* arr, int size, int start)
{
	if (!arr || start <= 0 || start > size)
		return;

	for (int i = start; i < size; i++)
	{
		arr[i - 1] = arr[i];
	}
	arr[size - 1] = 0;
}

#endif //MAIN_HPP
