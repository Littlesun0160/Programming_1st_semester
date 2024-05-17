#include <iostream>
#include <fstream>

#include "inc/reading.hpp"
#include "inc/SimpleNum.hpp"
#include "inc/SummOfElement.hpp"
#include "inc/NormaSort.hpp"
#include "inc/Writing.hpp"

int main()
{
	setlocale(LC_ALL, "ru");
	int matrix[100][100];
	int Norm[100];
	int str, stl, x, strOfCond1;
	AS::Reading(matrix, str, stl);  //функция чтения матрицы из файла
	bool IsCond = false;
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stl; j++)
		{
			if (AS::SimpleNum(matrix,i,j))
			{
				strOfCond1 = i;
				if (AS::SummOfElement(matrix, strOfCond1, stl)==true)
				{
					IsCond=true;
				}
			}
		}
	}
	if (IsCond==true)
	{
		AS::NormaSort(matrix, str, stl, Norm);
	}
	AS::Writing(matrix, str, stl, Norm);
	std::cout << "все ок";
}