#include<iostream>
using namespace std;

union date{
    int day;
    char month;
    float tem;
};

int main(){
    union date m1;

    m1.month = 'm';
    m1.day = 78;
    m1.tem = 30.8;

    cout<<m1.tem;

    return 0;
}