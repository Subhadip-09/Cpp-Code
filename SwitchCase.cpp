#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter your age : " << endl;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are under the age limit" << endl;
        break;
    case 19:
        cout << "You just touch the age limit, So you get some access" << endl; // Switch Case Condition
        break;
    case 30 :
        cout << "You are adult you can access all things" << endl;
        break;
    }
    cout<< "Not in case";

    return 0;
}