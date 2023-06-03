#include <iostream>
using namespace std;

int main()
{
    // for(int  i = 0;i<6;i++){
    //     if(i==4){
    //         break; // using for loop
    //     }
    //     cout<<i<<endl;
    // }
    // int i = 0;
    // while (i < 10)
    // {
    //     cout << i << endl;
    //     i++;

    //     if (i == 4) // using while loop
    //     {
    //         break;
    //     }
    // }
    int i = 1;
    do{
        cout<<i<<endl;
        i++;
        if (i==4) // using do-while loop..
    {
        break;
    }
    }while(i<6);
    
    

    return 0;
}