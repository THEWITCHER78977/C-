#include <iostream>

using namespace std;

struct Num {
    int arr[3];
};

Num ReadNumbers()
{
    Num Number;
    for (int i = 0; i < 3; i++)
    {
        cout << "Please Enter number " << i+1 << endl;
        cin >> Number.arr[i];
    }
    return Number;
}

float SumOfNumbers(Num Number)
{
    float Sum = 0;
    for (int i = 0; i < 3; i++)
    {
        Sum += Number.arr[i];
    }
    return Sum;
}

void PrintSum(float Sum)
{
    cout << "the Sum = " << Sum << endl;
}

void MyCode()
{
    PrintSum(SumOfNumbers(ReadNumbers()));
}

void ReadNumbers(int &Num1, int& Num2, int& Num3)
{
    cout << "Please Enter Your Number 1" << endl;
    cin >> Num1;

    cout << "Please Enter Your Number 1" << endl;
    cin >> Num2;

    cout << "Please Enter Your Number 1" << endl;
    cin >> Num3;

}

int SumOf3Numbers(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}

float AvregeOf3Numbers(int Num1, int Num2, int Num3)
{
    return (Num1 + Num2 + Num3) / 3;
}

void PrintResults(int Total)
{
    cout << "\n The Total sum of the numbers: " << Total << endl;
    cout << "\n The  avrege of the numbers: " << Total / 3 << endl;
}

int main()
{
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResults(SumOf3Numbers(Num1, Num2, Num3));
    return 0;
}

