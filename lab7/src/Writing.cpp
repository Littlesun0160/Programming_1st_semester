#include "../inc/Writing.hpp"
#include <fstream>

namespace AS
{
	void Writing(int matrixx[100][100], int& str, int& stl, int Norm[100])
	{
		std::ofstream result;
		result.open("итог.txt");
		for (int i = 0; i < str; i++)
		{
			for (int j = 0; j < stl; j++)
			{
				result << matrixx[i][j] << " ";
			}
			result << "\n";
		}
		result << "\n";
		for (int p = 0; p < stl; p++)
		{
			result << Norm[p] << " ";
		}
	}
}