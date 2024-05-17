#include <iostream>
#include "../inc/reading.hpp"
#include <fstream>

namespace AS
{
	void Reading(int matrixx[100][100], int& a, int& b)
	{
		std::ifstream file;
		file.open("פאיכ.txt");
		while (!file.eof())
		{
			file >> a;
			file >> b;
			for (int i = 0; i < a; i++)
			{
				for (int j = 0; j < b; j++)
				{
					file >> matrixx[i][j];
				}
			}
		}
	}
}
