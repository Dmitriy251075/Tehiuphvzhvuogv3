#include "inout.h"
#include <iostream>

void read(std::vector<int>& vec)
{
	// ������ ������������ ������ ���������� ��������� � �������
	std::cout << "Enter vector count: ";
	int count;

	// �������� ���������� ��������� � ������� �� ������������
	std::cin >> count;


	std::cout << "Enter vector of int: ";

	// ���� ��������� � ���������� ������� ������� ������������
	for (int i = 0; i < count; i++)
	{
		int o;
		std::cin >> o;
		vec.push_back(o);
	}
}
