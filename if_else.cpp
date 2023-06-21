#include <iostream>

using namespace std;

int main(){

    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;
    if(age<18){
        cout<<"You are under the age limit"<<endl;
    }else if(age==18){
        cout<<"You just touch the age limit, So you get some access"<<endl; // If else-if else Ladder
    }else{
        cout<<"You are adult you can access all things"<<endl;
    }

    return 0;
}