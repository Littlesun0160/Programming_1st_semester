#include <iostream>
int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	std::cout << "������� ����� ��� ������\n";
	std:: cin >> n;
	switch (n)
	{
	case 1: std::cout << "�����������\n";
		break;
	case 2: std::cout << "�������\n";
		break;
	case 3: std::cout << "�����\n";
		break;
	case 4: std::cout << "�������\n";
		break;
	case 5: std::cout << "�������\n";
		break;
	case 6: std::cout << "�������\n";
		break;
	case 7: std::cout << "�����������\n";
		break;
	default: std::cout << "�������� ��������\n";
	}
}