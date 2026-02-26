
#include <iostream>

using namespace std;

enum enNumebrType { Odd = 1, Even = 2 };

int ReadNumber()
{
	int Number;
	cout << "Please Enter a Number :";
	cin >> Number;
	return Number;
}

enNumebrType CheckNumberType(int Number)
{
	int Result = Number % 2;
	if (Result==0)
		return enNumebrType::Even;
	else
		return enNumebrType::Odd;
}

void PrintNumberType(enNumebrType NumberType)
{
	if (NumberType == enNumebrType::Even)
		cout << "\n Number is Even. \n ";
	else
		cout << "\n Number is Odd. \n ";

}
int main()
{
	PrintNumberType(CheckNumberType(ReadNumber()));
	return 0;
}
