#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	std::cout << "������� �����" << "\n";
	long long A;   //��� ��� ��� long long, �� �� ���������� ��������� 8 ���� ������
	std::cin >> A;

	unsigned char* B = (unsigned char*)&A; //���������� � �������� ���������� �� ����� ������� �����, ��������� �������� ���������� � (����� 1 ����)
	unsigned char mas[8];
	for (int i = 0; i < 8; i++)
	{
		mas[i] = *(B + i);
		std::cout << (int)mas[i] << " ";
	}
	long long x = *((long long*)mas);  //��������, �������� �������� (������� �� 8 ���������� �������� char � ���� 8-�������� �������� long long)
	std::cout << "\n" << x;

}