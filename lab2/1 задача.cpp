#include <iostream>
int main()
{
	setlocale(LC_ALL, "ru");
	unsigned int a, b, c;
	std::cout << "������� ����������� �������� a, b � c\n";
	std::cin >> a >> b >> c;
	std::cout << "b = " << b << "\n";
	if (((a % c) == 0)&&((b%c)==0))
	{
		std::cout << "���� = " << (a+b)/c;
	}
	else if (((a % c) == 0) && ((b % c) != 0))
	{
		std::cout << "���� = " << a/(c+b);
	}
	else
	{
		int m = a - b - c;
		std::cout << "���� = " << m;
	}
}