// NewYear2017.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>


int main()
{
	setlocale(LC_ALL, "rus");
	int num, pr = 0;
	std::cin >> num;
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
			pr++;
	}
	if (pr > 1)
		std::cout << "�������" << std::endl;
	else
		std::cout << "�������" << std::endl;

	system("pause");
    return 0;
}

