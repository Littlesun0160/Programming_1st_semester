#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	std::cout << "¬ведите число" << "\n";
	long long A;   //“ак как тип long long, то на переменную удел€етс€ 8 байт пам€ти
	std::cin >> A;

	unsigned char* B = (unsigned char*)&A; //ѕеременна€ ¬ €вл€етс€ указателем на адрес первого байта, хран€щего значение переменной ј (весит 1 байт)
	unsigned char mas[8];
	for (int i = 0; i < 8; i++)
	{
		mas[i] = *(B + i);
		std::cout << (int)mas[i] << " ";
	}
	long long x = *((long long*)mas);  //ѕроверка, обратное действие (перевод из 8 побайтовых значений char в одно 8-байтовое значение long long)
	std::cout << "\n" << x;

}