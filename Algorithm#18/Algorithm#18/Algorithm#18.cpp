#include <iostream>

using namespace std;

float ReadRadius()
{
    float Radius;

    cout << "Please Enter The Radius of The Circle : " << endl;
    cin >> Radius;
    
    return Radius;
}

float CalculateCircleArea(float Radius)
{
    const float Pi = 3.14159265358979323846;

    float Area = Pi*pow(Radius,2);
    
    return Area;
}

void PrintCircleArea(float Result)
{
    cout << "Circle Area = " << Result;
}

int main()
{
    PrintCircleArea(CalculateCircleArea(ReadRadius()));
    return 0;
}
