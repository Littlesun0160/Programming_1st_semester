#include "../inc/SimpleNum.hpp"
#include <cmath>
#include <iostream>

namespace AS
{
	bool SimpleNum(int matrixx[100][100], int& a, int& b)
	{
		int x;
		x = matrixx[a][b];
		if (x < 2)
		{
			return false;
		}
		for (int d = 2; d <= sqrt(x); d++)
		{
			if (x % d == 0)
			{
				return false;
			}
		}
		return true;
	}
}