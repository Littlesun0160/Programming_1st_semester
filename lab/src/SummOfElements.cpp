#include "../inc/SummOfElement.hpp"

namespace AS
{
	bool SummOfElement(int matrixx[100][100], int& a, int& b)
	{
		int summ = 0;
		for (int j = 0; j < b; j++)
		{
			int x;
			x = matrixx[a][j];
			summ += x;
		}
		if (summ == 0)
		{
			return true;
		}
		else return false;
	}
}