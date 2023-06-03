#include <iostream>
using namespace std;

int main()
{
    int number[5] = {45, 98, 65, 12, 90};
    int i;

    // cout<<number[0]<<endl;
    // cout<<number[1]<<endl;
    // cout<<number[2]<<endl;
    // cout<<number[3]<<endl;
    // cout<<number[4]<<endl;

    // arrays value print using for loop..

    for (i = 0; i < 5; i++)
    {
        cout << "the value of " << i << " is : " << number[i] << endl;
    }

    // arrays value print using while loop..

    // while(i<5){
    //     cout<<"the value of "<<i<<" is : "<<number[i]<<endl;
    //     i++;
    // }

    // arrays value print using do-while loop..

    do
    {
        cout << "the value of " << i << " is : " << number[i] << endl;
        i++;
    } while (i < 5);

    return 0;
}