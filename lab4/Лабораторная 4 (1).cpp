#include <iostream>
#include <string>
#include <fstream>
#include <utility>
int main()
{
	setlocale(LC_ALL, "ru");
	int n, x;
	std::cout << "Введите количество элементов в массиве\n";
	std::cin >> n;
	int str[1000]{};
	int ert[1000]{};
	int qaz[1000]{};
	for (int i = 0; i < n; i++)
	{
		std::cin >> str[i];
	}
	for (int j = 0; j < n; j++) //нахождение произведения цифр числа
	{
		n = str[j];
		int y = 1;
		int digit;
		while (n > 0)
		{
			digit = n % 10;
			y *= digit;
			n /= 10;
		}
		qaz[j] = y;
		std::cout << qaz[j] << "\n";
	}
}
