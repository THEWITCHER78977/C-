//Calculate Circle Area Inscribed in square 
#include <iostream>

using namespace std;

float ReadSideLenghtofSquare()
{
	float SideLenght;

	cout << "--Calculate Circle Area Inscribed in square--" << endl;
	cout << "Please Enter The Side Lenght of The square : " << endl;
	cin >> SideLenght;

	return SideLenght;
}

float CircleAreaInscribedInSquare(float SideLenght)
{
	const float Pi = 3.14159265358979323846;

	float Area = Pi * pow(SideLenght / 2, 2);
	float Area2 = (Pi * pow(SideLenght, 2)) / 4;

	return Area;
}

void PrintCircleArea(float Result)
{
	cout << "\n Circle Area = " << Result;
}

int main()
{
	PrintCircleArea(CircleAreaInscribedInSquare(ReadSideLenghtofSquare()));
	return 0;
}
