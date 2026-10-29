#include <iomanip> //For setw().
#include <iostream>
#include <vector>

void printSalesData(std::vector<std::vector<int>> salesData)
{

	const int WIDEST_COLUMN = 7;

	//Nested loop.
	for (int row = 0; row < salesData.size(); row++)
	{
		for (int column = 0; column < salesData[0].size(); column++)
		{
			std::cout << std::setw(WIDEST_COLUMN);
			std::cout << std::left; /*"Left", because it keeps the values staggered to the left of the
			terminal */
			std::cout << salesData[row][column] << " "; //[] means "at".
		}
		std::cout << std::endl;
	}
}

int main()
{
	/*The game visualized :
	xox
	oxo
	xoo
	*/

	std::vector<std::vector<int>> salesData =
	{
		{1,		2,		3},
		{4,		5,		6},
		{7,		8,		9},
		{10,	11,		12}
	};

	printSalesData(salesData);
	//Dimensions of this array (also called a matrix) are 3 x 4 (I.e., four rows and three columns).
	

}