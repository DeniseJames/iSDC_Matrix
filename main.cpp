#include <iostream>
#include <vector>
#include "matrix.h"
#include <iomanip>

int main() {
	// declare a matrix
	std::vector<std::vector<float>> my_matrix, return_grid;

	my_matrix = {	{1.0, 2.0, 3.0},
					{4.0, 5.0, 6.0},
					{ 7.0, 8.0, 9.0 },
					{ 10.0, 11.0, 12.0 }
				};
	Matrix two_dimensional_matrix(my_matrix);
	
	return_grid = two_dimensional_matrix.getGrid();

	std::cout << "Return matrix is: " << std::endl;
	for (auto vec : return_grid)
	{
		for (auto x : vec)
			std::cout << std::setw(4) << x;
		std::cout << std::endl;
	}


	// print matrix, rows and columns
//	std::cout << "The matrix is:  " << two_dimensional_matrix.matrix_print << std::endl;

	return 0;
}