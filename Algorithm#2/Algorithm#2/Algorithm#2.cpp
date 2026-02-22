
#include <iostream>
#include<string>

using namespace std;


string ReadName()
{
    string Name;

    cout << "Enter Your Name : ";
    getline(cin, Name);

    return Name;
}

void PrintName(string Name)
{
    cout << "\n Your Name is :" << Name;
}

int main()
{
    PrintName(ReadName());
    return 0;
}