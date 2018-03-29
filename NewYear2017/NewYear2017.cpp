// NewYear2017.cpp: определяет точку входа для консольного приложения.
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
		std::cout << "Сложное" << std::endl;
	else
		std::cout << "Простое" << std::endl;

	system("pause");
    return 0;
}

