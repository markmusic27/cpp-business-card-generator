#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string name;
    int age;
    string address;

    cout << "👋 C++ Business Card Generator";

    cout << "\nWhat is your name? ";

    cin >> name;

    cout << "\nHow old are you? ";
    cin >> age;

    cout << "\nWhere do you live? ";
    cin >> address;
    cout << "\n\n";

    cout << "Name: " << name << "\n"
         << "Age: " << age << "\n"
         << "Address: " << address << endl;
}