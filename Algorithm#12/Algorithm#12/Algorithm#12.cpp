#include <iostream>
#include<string>
using namespace std;

void ReadNumbers(int &Number1,int &Number2)
{
    cout << "Please Enter Number 1" << endl;
    cin >> Number1;
    cout << "Please Enter Number 1" << endl;
    cin >> Number2;
}

int MaxOf2Numbers(int Number1,int Number2)
{
    if (Number1 > Number2)
        return Number1;
    else
        return Number2;
}

void PrintResult(int Max)
{
    cout << "\n The Maximum Number is : " << Max << endl;
}

int main()
{
    int Number1, Number2;
    ReadNumbers(Number1, Number2);
    PrintResult(MaxOf2Numbers(Number1, Number2));
    return 0;
}





//My Code 
//void ReadNumbers(int& Number1, int& Number2)
//{
//    cout << "Please Enter Number 1" << endl;
//    cin >> Number1;
//    cout << "Please Enter Number 1" << endl;
//    cin >> Number2;
//}
//
//string MaxOf2Numbers(int Number1, int Number2)
//{
//    string Result;
//    if (Number1 > Number2)
//        return Result = to_string(Number1) + " Is Max";
//    else
//        return Result = to_string(Number2) + " Is Max";
//}
//
//void PrintResult(string Results)
//{
//    cout << Results;
//}
