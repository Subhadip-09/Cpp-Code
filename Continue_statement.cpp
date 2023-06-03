#include <iostream>
using namespace std;

int main()
{
    // using while loop...
    int i = 1;
    // while (i < 10)
    // {
    //     if (i == 4) // Continue statement skip this if condition
    //     {
    //         i++;
    //         continue;
    //     }
    //     cout << i << endl;
    //     i++;
    // }
    //  using do-while lopp..
    // do
    // {
    //     cout << i << endl;
    //     i++;
    //     if (i == 4) // not working
    //     {
    //         continue;
    //     }

    // } while (i < 10);

    // using for loop
    for(i;i<10;i++){
        if(i==4){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}