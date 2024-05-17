#include <iostream>
#include <string>
#include <fstream>
#include <utility>
int main()
{
	setlocale(LC_ALL, "ru");
	int matrix[100][100];
	int sums[100];
	int n, m, i, j, summ, minimum,a;
	minimum = INT_MAX;
	std::cout << "Введите количество строк\n";
	std::cin >> n;
	std::cout << "Введите количество столбцов\n";
	std::cin >> m;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
	for (j = 0; j < m; j++)
	{
		summ = 0;
		for (i = 0; i < n; i++)
		{
			summ += matrix[i][j];
		}
		sums[j] = summ;
		if (summ < minimum)
		{
			minimum = summ;
			a = j;
		}
	}
	for (i = 0; i < n; i++)
		matrix[i][a] += 3;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
}
