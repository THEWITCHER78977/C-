
#include <iostream>

using namespace std;

void ReadBaseAndHeight(float& Base, float& Height)
{
    cout << "Please Enter The Base of The Traingle : " << endl;
    cin >> Base;
    cout << "Please Enter The Height of The Traingle : " << endl;
    cin >> Height;

}

float CalculateTraingleArea(float Base, float Height)
{
    float Area = (Base * Height) / 2;
    return Area;
}

void PrintTraingleArea(float Result)
{
    cout << "Traingel Area = " << Result;
}

int main()
{
    float Base, Height;
    ReadBaseAndHeight(Base, Height);
    PrintTraingleArea(CalculateTraingleArea(Base, Height));
    return 0;
}
