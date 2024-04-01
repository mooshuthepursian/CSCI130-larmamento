/*
HW4 Conditionals 
Name: Leanza Armamento 
Class: CSCI130- 001
Date: 3/26/24

OBJECTIVE: Write a command line interface (CLI) based menu-driven C++ program that computes certain values such as sum, product, max, min, average, oddity of any 5 given numbers along with the following requirements. 

STEPS:
Greet the user by their name and prompt them to enter 5 numbers. (5 points)
Display menu options for each function and call the specific function based on the user's choice to calculate the result using switch statement and display the result with proper descriptions. (5 points)
Define a function that takes 5 numbers, calculates and returns the sum of the numbers. (5 points)
Define a function that takes 5 numbers, calculates and returns the product of the numbers. (5 points)
Define a function that takes 5 numbers, calculates and returns the average of the numbers. Must call the function you defined earlier to find the sum of the five numbers. (5 points)
Define a function that takes 5 numbers, finds and returns the largest value among the numbers. Must use your own conditional statements and NOT use any built-in function. (5 points)
Define a function that takes 5 numbers, finds and returns the smallest value among the numbers. Must use your own conditional statements and NOT use any built-in function. (10 points)
Define a function that takes five numbers and returns if the floor of the sum of those numbers is even, odd or zero. (5 points)

*/

#include <iostream>
#include <string>
#include <cstdio>
#include <cassert>
#include <cmath>

using namespace std; 
void printMenu(void);
void getFiveNumbers(double &n1, double &n2, double &n3, double &n4, double &n5);
// double findSum(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5);
double findProduct(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5);
double findAverage(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5);
double findLarger(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5);
double findSmaller(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5); 
int flor(double &, double &, double &, double &, double &); 
double avg=0;
double product =0;
double sum=0;
template<typename T>
T findSum(T, T, T, T, T);
const float epsilon = 1e-5;

void test();

bool program();


void printMenu(void)
{
    cout << "Menu options:\n";
    cout << "[1] Sum of the 5 numbers\n";
    cout << "[2] Product of the five numbers\n";
    cout << "[3] Average of the five numbers\n";
    cout << "[4] Find larger of the five numbers\n";
    cout << "[5] Find smaller of the five numbers\n";
    cout << "[6] Calculates if the floor of the sum of those numbers is even, odd or zero\n";

    cout << "Enter one of the menu options [1-6]: ";
}
void getFiveNumbers(double &n1, double &n2, double &n3, double &n4, double &n5) 
{
    cout << "Enter five numbers separated by a space: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
}


template <typename T> T findSum(T n1, T n2, T n3, T n4, T n5)
{
    sum = n1 + n2 + n3 + n4 + n5; 
    return sum;
}


double findProduct(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) 
{
    product = (n1*n2*n3*n4*n5);
    return product;
}

double findAverage(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) 
{
    avg = findSum(n1, n2, n3, n4, n5)/5; 
    return avg; 
}   

double findLarger(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) 
{
    double larger1 = (n1 >= n2) ? n1 : n2;
    double larger2 = ( larger1 >= n3) ?  larger1 : n3;
    double larger3 = ( larger2 >= n4) ?  larger2 : n4;
    double larger4 = ( larger3 >= n5) ?  larger3 : n5;
    return larger4;
}

double findSmaller(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) 
{
    double smaller1 = (n1 <= n2) ? n1 : n2;
    double smaller2 = ( smaller1 >= n3) ?  smaller1 : n3;
    double smaller3 = ( smaller2 >= n4) ?  smaller2 : n4;
    double smaller4 = ( smaller3 >= n5) ?  smaller3 : n5;
    return smaller4;
}

int main(int argc, char* argv[])
{
    if(argc == 2 && (string)argv[1] == "test")
{
    test();
    return 0; 
}
    string name = "User";
 	 cout << "Hi there, what's your first and last name? ";
     string inputName;
     cout << ": ";
     getline(cin, inputName); 

 	cout << "Nice meeting you, " << inputName << "!" << endl;

    int option = 1; // variable to store user entered option
    double num1=0, num2=0, num3=0, num4=0, num5=0; // variables to store two numbers entered by user
    // display menu options
    printMenu();
    // Input validation
    do {
        if (cin >> option && option >= 1 && option <= 6) {
            //input is valid, break loop
            break;
        }
        else {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please enter a value between 1 and 7" << endl;
        }
    } while (true);

    switch(option) {
        case 1:
        {
            getFiveNumbers(num1, num2, num3, num4, num5);
            double sum = findSum(num1, num2, num3, num4, num5);
            printf("%.2f + %.2f + %.2f + %.2f + %.2f  = %.2f\n", num1, num2, num3, num4, num5, sum);
            break;
        }
        case 2:
        {
            getFiveNumbers(num1, num2, num3, num4, num5);
            double prod = findProduct(num1, num2, num3, num4, num5);
            printf ("%.2f *%.2f + %.2f + %.2f + %.2f= %.2f\n", num1, num2, num3, num4, num5, prod);
            break;
        }
        case 4:
        {
            getFiveNumbers(num1, num2, num3, num4, num5);
            double max = findLarger(num1, num2, num3, num4, num5);
            printf("larger between %.2f & %.2f & %.2f & %.2f & %.2f is %.2f\n", num1, num2, num3, num4, num5, max);
            break;
        }
        case 5:
        {
            getFiveNumbers(num1, num2, num3, num4, num5);
            double min = findSmaller(num1, num2, num3, num4, num5);
            printf("smaller between %.2f & %.2f & %.2f & %.2f & %.2f is %.2f\n", num1, num2, num3, num4, num5, min);
            break;
        }
        case 3: 
        {
            getFiveNumbers(num1, num2, num3, num4, num5);
            double avg = findAverage(num1, num2, num3, num4, num5);
            printf ("%.2f + %.2f + %.2f + %.2f + %.2f/ 5 = %.2f\n", num1, num2, num3, num4, num5, avg);
            break;
        }
        case 6: 
        {
            getFiveNumbers(num1, num2, num3, num4, num5);
            int flor = floor(findSum(num1, num2, num3, num4, num5));

            if (flor == 0)
            {
                cout << "The floor is zero.\n";
            }
            else if (flor % 2 == 1)
            {
                cout << "The floor is odd. \n";
            }
            else
            {
                cout << "The floor is even. \n";
            }
            
            
            break;
        }}}
        
void test()
{
    float result0Sum = findSum(2, 2, 2, 2, 2);
    float expected0Sum = 10;
    assert( fabs(result0Sum - expected0Sum) <= epsilon);

    float result0Product = findProduct(2, 2, 2, 2, 2);
    float expected0Product = 10;
    assert( fabs(result0Product - expected0Product) <= epsilon);

    float result0Average = findAverage(4, 8, 6, 2, 10);
    float expected0Average = 6;
    assert( fabs(result0Average - expected0Average) <= epsilon);

    float result0Larger = findLarger(2, 3, 4, 5, 1);
    float expected0Larger = 5;
    assert( fabs(result0Larger - expected0Larger) <= epsilon); 

    float result0Smaller = findSmaller(2, 3, 4, 5, 1);
    float expected0Smaller = 1;
    assert( fabs(result0Smaller - expected0Smaller) <= epsilon);

    float result0Flor = floor(findSum(2, 5, 3, 6, 8));
    float expected0Flor = 24;
    assert( fabs(result0Flor - expected0Flor) <= epsilon); 
    cerr << "all tests passed..." << endl;
}
