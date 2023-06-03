#include <iostream>
using namespace std;

int main(){

    int number;
    cout<<"Enter a number : "<<endl;
    cin>>number;
    for(int i = 1;i<=10;i++){
        cout << number * i<<endl; // multipication table
    }

    return 0;
}