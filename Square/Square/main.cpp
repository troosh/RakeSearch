# include <fstream>
# include "Square.h"

using namespace std;

int main()
{
	/*int matrix[Square::Rank][Square::Rank] =
	{
		{0, 1, 2, 3, 4, 5, 6, 7, 8},
		{8, 2, 6, 0, 5, 1, 7, 4, 3},
		{2, 4, 1, 6, 0, 8, 5, 3, 7},
		{1, 7, 8, 4, 6, 2, 3, 0, 5},
		{6, 5, 4, 7, 3, 0, 1, 8, 2},
		{5, 8, 3, 1, 2, 7, 0, 6, 4},
		{4, 3, 0, 5, 7, 6, 8, 2, 1},
		{3, 6, 7, 8, 1, 4, 2, 5, 0},
		{7, 0, 5, 2, 8, 3, 4, 1, 6}
	};

	Square simpleSquare(matrix);

	fstream outfile;
	outfile.open("square.txt", std::ios_base::out);

	if (outfile.is_open())
	{
		outfile << simpleSquare;
		outfile.close();
	}*/

	Square simpleSquare;
	fstream infile;
	infile.open("square.txt", std::ios_base::in);

	if (infile.is_open())
	{
		infile >> simpleSquare;
		infile.close();
	}

	return 0;
}