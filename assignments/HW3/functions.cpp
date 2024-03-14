/*
Name: Leanza Armamento 
CSCI130
A Basic Calculator Using Functions and Automated Unit Testing
*/

#include <iostream>
#include <cmath> //library for pow and other math functions
#include <cassert>
#include <cstdio>

using namespace std;
const float epsilon = 1e-5; // 0.00001 accuracy upto 5 decimal points; error of margin

void printNums(int&, int&);

template<typename T>
T addNums(T, T);
template<typename T2>
T2 subNums(T2, T2);
template<typename T3>
T3 multiplyNums(T3, T3); 
template<typename T4>
T4 divideNums(T4, T4);
template<typename T5>
T5 remainderNums(T5, T5); 
template<typename T6>
T6 powerNums(T6, T6);
template<typename T7>
T7 sqrtNums(T7); 
template<typename T8>
T8 ssqrtNums(T8);

template<typename T>
void getNums(T&, T&);


int main ()
{
    int num1 = 0, num2= 0;

    getNums<int>(num1, num2);
 
    cout << "Adding the numbers: ";
    cout << num1<< " + " << num2 << " = "  << addNums<int>(num1,num2) << endl;
    cout << "Subtracting the second number by the first: ";
    cout << num2 << " - " << num1 << " = " << subNums<int>(num1,num2) << endl;
    cout << "Multiplying the numbers: ";
    cout << num1 << " * " << num2 << " = " << multiplyNums<int>(num1,num2) << endl;
    cout << "Dividing the numbers: ";
    cout << num1 << " / " << num2<< " = " << divideNums<double>(num1,num2) << endl;
    cout << "Remainder of the divided numbers: ";
    cout << num1 << " % " << num2 << " = " << remainderNums<int>(num1,num2) << endl;
    cout << "The power of the first number by the second number: ";
    cout << num1 << " ^ " << num2 << " = " << powerNums<int>(num1, num2) << endl; 
    cout << "Taking the square root of the first number: ";
    cout << num1 << "^1/2" << " = " << sqrtNums<double>(num1) << endl; 
    cout << "Taking the square root of the second number: "; 
    cout << num2 << " ^1/2" << " = " << ssqrtNums<double>(num2) << endl;
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

template <typename T2> T2 subNums(T2 n1, T2 n2)
{
    return n2 - n1;
}

template <typename T3> T3 multiplyNums(T3 num1, T3 num2)
{
    return num1 * num2;
}

template <typename T4> T4 divideNums(T4 num1, T4 num2)
{
    return num1 / num2; 
}

template <typename T5> T5 remainderNums(T5 num1, T5 num2)
{
    return num1 % num2; 
}

template <typename T6> T6 powerNums(T6 num1, T6 num2)
{
    return pow(num1, num2);
}

template <typename T7> T7 sqrtNums(T7 num1)
{
    return sqrt(num1);
}

template <typename T8> T8 ssqrtNums(T8 num2)
{
    return sqrt(num2);
}

void test()
{
    float result0add = addNums(2, 2);
    float expected0add = 4;
    assert( fabs(result0add - expected0add) <= epsilon); //accept the result if it's less than the error of margin
    float result1add = addNums(6, 2);
    float expected1add = 8;
    assert( fabs(result1add - expected1add) <= epsilon);

    float result0sub = subNums(2, 2);
    float expected0sub = 0;
    assert( fabs(result0sub - expected0sub) <= epsilon);
    float result1sub = subNums(6, 2);
    float expected1sub = -4;
    assert( fabs(result1sub - expected1sub) <= epsilon);

    float result0multiply = multiplyNums(2, 2);
    float expected0multiply = 4;
    assert( fabs(result0multiply - expected0multiply) <= epsilon);
    float result1multiply = multiplyNums(6, 2);
    float expected1multiply = 12;
    assert( fabs(result1multiply - expected1multiply) <= epsilon);

    float result0divide = divideNums(2, 2);
    float expected0divide = 1;
    assert( fabs(result0divide - expected0divide) <= epsilon);
    float result1divide = divideNums(6, 2);
    float expected1divide = 3;
    assert( fabs(result1divide - expected1divide) <= epsilon);

    float result0remainder = remainderNums(2, 2);
    float expected0remainder = 0;
    assert( fabs(result0remainder - expected0remainder) <= epsilon);
    float result1remainder = remainderNums(4, 4);
    float expected1remainder = 0;
    assert( fabs(result1remainder - expected1remainder) <= epsilon);

    float result0power = powerNums(2, 2);
    float expected0power = 4;
    assert( fabs(result0power - expected0power) <= epsilon);
    float result1power = powerNums(6, 2);
    float expected1power = 36;
    assert( fabs(result1power - expected1power) <= epsilon);

    float result0sqrt = sqrtNums(4);
    float expected0sqrt = 2;
    assert( fabs(result0sqrt - expected0sqrt) <= epsilon);
    float result1sqrt = sqrtNums(36);
    float expected1sqrt = 6;
    assert( fabs(result1sqrt - expected1sqrt) <= epsilon);
    cerr << "all tests passed..." << endl;
}