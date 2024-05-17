#include <iostream>
#include <string>
#include <fstream>
#include <utility>
int main()
{
	setlocale(LC_ALL, "ru");
	char sog[21] = "bcdfghjklmnpqrstvwxz";
	int n;
	std::cout << "Введите количество символов в строке\n";
	std::cin >> n;
	char str[100];
	std::cout << "Введите поочередно символы в строку\n";
	for (int i = 0; i < n; i++)
	{
		std::cin >> str[i];
	}
	for (int i = 0; i < strlen(str); i++)
	{
		for (int j = 0; j < strlen(sog); j++)
		{
			if (str[i]==sog[j])
				str[i] -= 32;
		}
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << str[i];
	}
}
