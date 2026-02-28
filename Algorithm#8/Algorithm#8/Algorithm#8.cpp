
#include <iostream>
#include<string>

using namespace std;

enum enResult { Pass = 1, Fail = 2 };

int ReadMark()
{
	int Mark;
	cout << "Please Enter Your  Mark ";
	cin >> Mark;
	return Mark;
}

enResult CheckMark(int Mark)
{
	if (Mark >= 50)
		return enResult::Pass;
	else
		return enResult::Fail;
}

void PrintResult(int Mark)
{
	if (CheckMark(Mark) == enResult::Pass)
		cout << "\nYou Passed" << endl;
	else
		cout << "\n You Failed" << endl;
}

int main()
{
	PrintResult(ReadMark());
	return 0;
}
