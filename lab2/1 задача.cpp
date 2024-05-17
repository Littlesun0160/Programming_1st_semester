#include <iostream>
int main()
{
	setlocale(LC_ALL, "ru");
	unsigned int a, b, c;
	std::cout << "¬ведите натуральные значени€ a, b и c\n";
	std::cin >> a >> b >> c;
	std::cout << "b = " << b << "\n";
	if (((a % c) == 0)&&((b%c)==0))
	{
		std::cout << "итог = " << (a+b)/c;
	}
	else if (((a % c) == 0) && ((b % c) != 0))
	{
		std::cout << "итог = " << a/(c+b);
	}
	else
	{
		int m = a - b - c;
		std::cout << "итог = " << m;
	}
}