
#include <iostream>

using namespace std;

void ReadDaimantions(float& A,float& B)
{
    cout << "Please Enter Rectangle Widtgh : ";
    cin >> A;

    cout << "Please Enter Rectangle Length : ";
    cin >> B;
}

float CalculateRectangleArea(float A, float B)
{ 
   
    return  A * B;
}

void PrintArea(float Area)
{
    cout << "Rectangle Area = " << Area;
}

int main()
{
    float A, B;
    ReadDaimantions(A, B);
    PrintArea(CalculateRectangleArea(A, B));
    return 0;
}
