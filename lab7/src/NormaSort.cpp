#include "../inc/NormaSort.hpp"
#include <cmath>
#include <iostream>


namespace AS
{
	void NormaSort(int matrixx[100][100], int& a, int& b, int Norm[100])
	{
		for (int j = 0; j < b; j++)
		{
			Norm[j] = 0;
			for (int i = 0; i < a; i++)
			{
				int x = matrixx[i][j];
				Norm[j] += (abs(x) * abs(x));
			}
			Norm[j] = sqrt(Norm[j]);
		}
		for (int j = 0; j < b - 1; j++)
		{
			for (int i = j + 1; i < b; i++)
			{
				if (Norm[j] < Norm[i])
				{
					std::swap(Norm[j], Norm[i]);
					for (int c = 0; c < a; c++)
					{
						std::swap(matrixx[c][j], matrixx[c][i]);
					}
				}
			}
		}
	}
}