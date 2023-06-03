#include<iostream>
using namespace std;

int multiply (int a); // fumction prototype

int main(){

    int num1;
    cout<<"Enter a num "<<endl;
    cin>>num1;
    multiply(num1); // function call



    return 0;
}

int multiply (int a){ // function  defination
    for(int i = 0; i<=10;i++){
        cout<<a*i<<endl;
    }
    
}