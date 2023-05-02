#include "inout.h"
#include <iostream>

void print(const std::vector<int>& vec)
{
	std::cout << "Vector:" << std::endl;

	// Цикл вывода на экран массива
	for (int i : vec)
	{
		std::cout << i << std::endl;
	}
}