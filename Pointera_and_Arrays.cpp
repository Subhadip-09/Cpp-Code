#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {45, 76, 32, 55, 90};
    int *p = marks;

    cout << "The value of *p is : " << *p << endl;
    cout << "The value of *p+1 is : " << *(p + 1) << endl;
    cout << "The value of *p+2 is : " << *(p + 2) << endl;
    cout << "The value of *p+3 is : " << *(p + 3) << endl;
    cout << "The value of *p+4 is : " << *(p + 4) << endl;
    
    return 0;
}