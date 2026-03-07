
#include <iostream>
using namespace std;

void ReadDiagonalandSideArea(float& Diagonal,float& SideArea)
{
	
	cout << "Please Enter  Diagonal : " << endl;
	cin >> Diagonal;

	cout << "Please Enter Side Area : " << endl;
	cin >> SideArea;
}

float RectangleAreaBySideAndDiagonal(float Diagonal, float SideArea)
{
	float Area;
	return Area = SideArea * sqrt(pow(Diagonal, 2) - pow(SideArea, 2));
}

void PrintRectangleArea(float Results)
{
	cout << "Rectangle Area = " << Results << endl;
}

int main()
{
	float Diagonal, SideArea;
	ReadDiagonalandSideArea(Diagonal, SideArea);
	PrintRectangleArea(RectangleAreaBySideAndDiagonal(Diagonal, SideArea));
	return 0;
}
