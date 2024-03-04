/* 
Leanza Armamento

POINTERS!!!!!!!!!!!!!!!!
*/
#include <iostream>

using namespace std;

int main()
{
    int num1;
    int* ptr1;
    int** ptr2;
    //int*** ptr3;
    // double* ptr2;
    //void* ptr42; 

    num1 = 42
    ptr1= &num1;
    ptr2= &ptr1;
    // ptr3= &ptr2;

    cout << "num1:\t" << num1 << endl;
    cout << "*ptr1:\t" << *ptr1 << endl;
    cout << "**ptr2:\t" << **ptr2 << endl;
    // cout << "&num1:\t" << &num1 << endl;
    // cout << "ptr1:\t" << ptr1 << endl;
    // cout << "&ptr1:\t" << &ptr1 << endl;
    // cout << "ptr2:\t" << ptr2 << endl;
    // cout << "&ptr2:\t" << &ptr2 << endl;

    // cout << "num1: " << num1 << endl;
    // cout << "ptr1: " << *ptr1 << endl;

    // cout << "&num1:\t" << &num1 << endl;
    // cout << "ptr1;\t" << ptr1 << endl;
    // cout << "&ptr1:\t" << &ptr1 << endl;
    return 0
}