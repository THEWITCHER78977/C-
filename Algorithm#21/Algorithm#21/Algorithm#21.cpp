
#include <iostream>

using namespace std;

float ReadCircumference()
{
    float Circumference;
    cout << "Please Enter the circumference : " << endl;
    cin >> Circumference;

    return Circumference;
}

float CircleAreaByCircumference(float Circumference)
{
    const float Pi = 3.14159265358979323846;

    float Area = pow(Circumference, 2) / (4 * Pi);

    return Area;
}

void PrintCircleArea(float Result)
{
    cout << "\n Circle Area = " << Result << endl;
}

int main()
{
    PrintCircleArea(CircleAreaByCircumference(ReadCircumference()));

    return 0;
}
