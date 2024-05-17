#include <iostream>
#include <string>
#include <fstream>
#include <utility>
int main()
{
	setlocale(LC_ALL, "ru");
	int n, x;
	std::cout << "¬ведите количество элементов в массиве\n";
	std::cin >> n;
	int str[1000]{};
	for (int i = 0; i < n; i++)
	{
		std::cin >> str[i];
	}
	int ert[1000]{};
	for (int j = 0; j < n; j++)
	{
		while (str[j] > 9)
		{
			x = str[j] / 10;
		}
		ert[j] = x;
		std::cout << ert[j] << "\n";
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << str[i] << " " << ert[i] << "\n";
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << str[i] << "\n";
	}
}
