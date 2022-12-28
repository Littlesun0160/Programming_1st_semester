#include <iostream>

class Circle
{
private:
	int m_radius = 0;
	int m_x = 0;
	int m_y = 0;
	double m_Len = 0;

public:
	Circle(int radius, int x, int y)
	{
		m_radius = radius;
		m_x = x;
		m_y = y;
	};
	~Circle() {}

	double Formule()
	{
		m_Len = 2 * acos(-1) * m_radius;
		return m_Len;
	}

	bool Radius(int radius)
	{
		if (radius <= 0)
		{
			std::cout << "Ошибка! Радиус не может быть меньше нуля. Попробуйте снова";
			return false;
		}
		m_radius = radius;
		return true;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	std::cout << "Введите радиус и координаты центра окружности" << "\n";
	int a, b, c;
	std::cin >> a >> b >> c;
	Circle Circle1(a, b, c);

	if (Circle1.Radius(a) == true)
	{
		std::cout << "Длина окружности равна " << Circle1.Formule();
	}
}
