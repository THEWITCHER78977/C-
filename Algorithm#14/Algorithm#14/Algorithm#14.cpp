#include <iostream>

using namespace std;

void ReadNumbers(int& Number1, int& Number2)
{
    cout << "Please Enter Number 1 : ";
    cin >> Number1;
    
    cout << "Please Enter Number 2 : ";
    cin >> Number2;
}

void Swap(int& Number1,int& Number2)
{
    int temp;
    temp = Number1;
    Number1 = Number2;
    Number2 = temp;
}

void PrintNumbers(int Number1, int Number2)
{
    cout << "Number 1 : " << Number1 << endl;
    cout << "Number 2 : " << Number2 << endl;
}

int main()
{
    int Number1, Number2;
    ReadNumbers(Number1, Number2);
    PrintNumbers(Number1, Number2);
    Swap(Number1, Number2);
    PrintNumbers(Number1, Number2);
    return 0;
}
