#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	std::cout << "Введите число" << "\n";
	long long A;   //Так как тип long long, то на переменную уделяется 8 байт памяти
	std::cin >> A;

	unsigned char* B = (unsigned char*)&A; //Переменная В является указателем на адрес первого байта, хранящего значение переменной А (весит 1 байт)
	unsigned char mas[8];
	for (int i = 0; i < 8; i++)
	{
		mas[i] = *(B + i);
		std::cout << (int)mas[i] << " ";
	}
	long long x = *((long long*)mas);  //Проверка, обратное действие (перевод из 8 побайтовых значений char в одно 8-байтовое значение long long)
	std::cout << "\n" << x;

}
