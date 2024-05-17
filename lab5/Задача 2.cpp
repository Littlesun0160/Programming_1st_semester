#include <iostream>
#include <string>
#include <fstream>
int main()
{
	setlocale(LC_ALL, "RUS");
	std::ifstream in;
	in.open("ok.txt");

	std::string words[5000];
	int size = 0;
	int N;
	in >> N;

	char c1, c2;
	in >> c1 >> c2;


	// Организовать считывание слов из файла
	while (!in.eof())
	{
		std::string s;
		in >> s;

		// Содержит ли слово 2 заданные буквы
		char str[101];
		int k = 0;
		for (int i = 0; i < s.length(); i++)
		{
			char c = tolower(s[i]);
			if (!ispunct(c))
			{
				str[k] = c;
				k++;
			}
		}
		str[k] = 0;
		bool isExistC1 = false;
		bool isExistC2 = false;
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] == c1)
			{
				isExistC1 = true;
			}
			else if (str[i] == c2)
			{
				isExistC2 = true;
			}
		}

		if (!isExistC1 || !isExistC2)
			continue;

		s = std::string(str);

		// Проверить, есть ли слово в массиве words, и добавить его, если нужно
		bool isExist = false;
		for (int i = 0; i < size; i++)
		{
			if (words[i] == s)
			{
				isExist = true;
				break;
			}
		}
		if (!isExist)
		{
			words[size] = s;
			//std::cout << words[size];
			size++;
		}
	}

	//Сортировка по возрастанию длин слов
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (words[i].length() > words[j].length())
			{
				std::swap(words[i], words[j]);
			}
		}
	}
	//вывод результата
	for (int i = 0; i < N; i++)
	{
		std::cout << words[i] << std::endl;
	}
}