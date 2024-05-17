#include <iostream>
#include <string>
#include <fstream>
#include <utility>
int main()
{
	setlocale(LC_ALL, "ru");
	int n, x, y, d, q;
	std::cout << "Введите количество элементов в массиве\n";
	std::cin >> n;
	int str[1000]{};
	int ert[1000]{};
	int qaz[1000]{};
	for (int i = 0; i < n; i++)
	{
		std::cin >> str[i];
	}
	for (int j = 0; j < n; j++) //нахождение первой цифры числа
	{
		x = str[j];
		if (x > 9)
		{
			while (x > 9)
			{
				x = x / 10;
			}
		}
		else x = str[j];
		ert[j] = x;
	}
	for (int a = 0; a < n; a++) //нахождение произведения цифр числа
	{
		q = str[a];
		y = 1;
		while (q > 0)
		{
			d = q % 10;
			y *= d;
			q /= 10;
		}
		qaz[a] = y;
	}
	for (int j = 0; j < n - 1; j++)
	{
		if (ert[j] > ert[j + 1]) //сортировка по неубыванию по первой цифре числа
		{
			std::swap(str[j], str[j + 1]);
		}
		if (ert[j] == ert[j + 1]) //сортировка по неубыванию произведения цифр числа
		{
			if (qaz[j] > qaz[j+1])
				std::swap(str[j], str[j + 1]);
		}
		if ((ert[j] == ert[j + 1]) && (qaz[j] == qaz[j + 1])) //сортировка по неубыванию самого числа
		{
			if (str[j] > str[j + 1])
				std::swap(str[j], str[j + 1]);
		}

	}
	std::cout << "итог!!!\n";
	for (int i = 0; i < n; i++)
	{
		std::cout << str[i] << "\n";
	}
}
