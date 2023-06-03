#include <iostream>
using namespace std;

int main()
{
    int a = 9;
    int *b = &a;
    // & ---> address operator
    cout << "The address of a is : " << &a << endl;
    cout << "the address of b is  : " << b << endl;
    // * ---> (value at) dereference operator
    cout << "the value at address is : " << *b << endl;
    return 0;
}