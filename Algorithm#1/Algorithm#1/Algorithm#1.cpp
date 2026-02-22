
#include <iostream>
#include<string>

using namespace std;

void PrintFullName()
{
    string FullName;
    cout << "Enter Your Full Name :";
    getline(cin, FullName);
    cout << FullName;
}

void PrintName(string Name)
{
    cout << "\n Your Name is: " << Name << endl;
}

int main()
{
    PrintFullName();
    PrintName("Abdelli Ahmed");
    return 0;
}
