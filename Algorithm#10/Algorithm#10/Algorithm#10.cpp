
#include <iostream>

using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please Enter Mark 1 :";
	cin >> Mark1;

	cout << "Please Enter Mark 2 :";
	cin >> Mark2;

	cout << "Please Enter Mark 3 :";
	cin >> Mark3;

}

int SumOf3Makrs(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float ClculateAverage(int Mark1, int Mark2, int Mark3)
{
	return (float)SumOf3Makrs(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckAverage(float Average)
{
	if (Average>=50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResults(float Average)
{
	cout << "\n The Average is : " << Average << endl;

	if (CheckAverage(Average)==enPassFail::Pass)
		cout << "\n You Passed" << endl;
	else
		cout << "\n You Failed" << endl;
}

int main()
{
	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResults(ClculateAverage(Mark1, Mark2, Mark3));
	return 0;
}
