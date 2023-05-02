#include "inout.h"
#include <iostream>

void read(std::vector<int>& vec)
{
	// Просим пользователя ввести количество элементов в векторе
	std::cout << "Enter vector count: ";
	int count;

	// Получает количество элементов в векторе от пользователя
	std::cin >> count;


	std::cout << "Enter vector of int: ";

	// Цикл получения и заполнения массива данными пользователя
	for (int i = 0; i < count; i++)
	{
		int o;
		std::cin >> o;
		vec.push_back(o);
	}
}
