#include <iostream>
#include "../inc/Func.hpp"

int mat(int a, int b)
{
	int matrix[100][100];
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
	return matrix[a][b];
}
