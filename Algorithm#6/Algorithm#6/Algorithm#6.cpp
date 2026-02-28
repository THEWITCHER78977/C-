
#include <iostream>

using namespace std;

struct stInfo
{
    string FirstName;
    string LastNasme;
};

stInfo ReadName()
{
    stInfo Info;

    cout << "Please Enter your First Name :";
    cin >>  Info.FirstName;

    cout << "Please Enter your Last Name :";
    cin >>  Info.LastNasme;

    return Info;
}

string GetFullName(stInfo Info, bool Reversed)
{
    string FullName;
    if (Reversed)
    {
        FullName = Info.LastNasme + " " + Info.FirstName;
    }
    else
    {
        FullName = Info.FirstName + " " + Info.LastNasme;
    }
    return FullName;
}

void PrintFullName(string FullName)
{
    cout<<"Your Full Name is: " << FullName;
}

int main()
{
    PrintFullName(GetFullName(ReadName(), false));
    return 0;
}
