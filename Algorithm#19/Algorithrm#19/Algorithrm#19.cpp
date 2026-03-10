
#include <iostream>

using namespace std;

float ReadCicleDiameter()
{
    float Diameter;
    
    cout << "Please Enter Cicle Diameter : " << endl;
    cin >> Diameter;

    return Diameter;
}

float CalculateCilceAreaByDiameter(float Diameter)
{
    const float Pi = 3.14159265358979323846;

    float Area = (Pi * pow(Diameter, 2)) / 4;

    return Area;

}

void PrintCircleArea(float Result)
{
    cout << "\nThe Circle Area = " << Result;
}

int main()
{

    PrintCircleArea(CalculateCilceAreaByDiameter(ReadCicleDiameter()));

    return 0;
}
