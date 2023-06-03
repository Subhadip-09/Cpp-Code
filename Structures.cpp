#include <iostream>
using namespace std;

// struct employee
// {
//     int eId;
//     float shalry;
//     char name_shotForm;
// };
typedef struct employee
{
    int eId;
    float shalry;
    char name_shotForm; // Using typedef...
} emp;

int main()
{

    emp subhadip;
    subhadip.eId = 2;
    subhadip.name_shotForm = 'S';
    subhadip.shalry = 872386;

    cout << subhadip.eId << endl;
    cout << subhadip.shalry << endl;
    cout << subhadip.name_shotForm << endl;

    return 0;
}