/*
Name: Leanza Armamento 
CSCI130
A Basic Calculator Using Functions and Automated Unit Testing
*/

#include <iostream>
using namespace std;
void printNums(int&, int&);
//float addNums(int&,int&);
template<typename T>
T addNums(T, T);
//int multiplyNums(int, int);
//float avgNums(int&, int&);
template<typename T>
void getNums(T&, T&);




int main ()
{
    int num1 = 0, num2= 0;

    getNums<int>(num1, num2);
    //cout << "Enter two numbers seperated by a space: ";
    //cin >> num1 >> num2;
    cout << num1<< " + " << num2 << " = "  << addNums<int>(num1,num2) << endl;

    return 0;
}

template <typename T> T addNums(T num1, T num2)
{
    return num1 + num2;
}
template <typename T> void getNums(T &num1, T &num2)
{
    cout << "Enter two numbers seperated by a space" << endl;
    cin >> num1 >> num2;
}
