﻿#include <iostream>
int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	float m, mi, sum;
	std::cout << "Введите количество чисел в последовательности\n";
	std::cin >> n;
	m = 0;
	mi = 0;
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		float a;
		std::cout << "Введите значение " << i << " элемента последовательности\n";
		std::cin >> a;
		if ((a > (-7)) && (a < 19))
		{
			sum = sum + a;
		}
		if ((a > m) && (a > (-7)) && (a < 19))
		{
			m = a;
			mi = i;
		}
	}
	std::cout << "Сумма чисел, лежащих в отрезке [-7;19], равна " << sum << "\n";
	std::cout << "Наибольшее число, принадлежащее данной последовательности и лежащее в отрезке [-7;19], равно " << m << "\n";
	std::cout << "Номер этого числа в последовательности " << mi << "\n";
}