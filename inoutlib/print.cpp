#include "inout.h"
#include <iostream>

void print(const std::vector<int>& vec)
{
	std::cout << "Vector:" << std::endl;

	// ���� ������ �� ����� �������
	for (int i : vec)
	{
		std::cout << i << std::endl;
	}
}