/*
Functions Lab
Updated By: Leanza Armamento
CSCI 111
Date: 3/2/2024

Program prompts the user to enter two points in the form (x1, y1) and (x2, y2) and finds the distance between the two points using a function.
Algorithm steps:
   1. Define a function called findDistance(…) that takes four parameters x1, y1 and x2, y2 as two points
       a. finds the distance between them using the equation: √((x2-x1)^2 + (y2-y1)^2)
       b. returns the calculated distance value
   2. Prompt user to enter two points in (x, y) format
   3. Store them into 4 individual variables
   4. Call function getDistance by passing 4 entered numbers as arguments
   5. Display results with proper description. Format output numbers to 2 decimal points.
   6. Test and validate that program output is correct for a given set of input points.
   7. BONUS - (10 points) Using a loop repeat step 2-6 until the user wants to quit.
*/

#include <iostream>
#include <cstdio>
#include <cassert>
#include <cmath>
using namespace std;

const float epsilon = 1e-5; // 0.00001 accuracy upto 5 decimal points; error of margin

// function prototypes

// Function that calculates the distance between two points
// x1, y1 and x2, y2 and returns the calculated value
double findDistance(int, int, int, int);

// test function that runs automated testing
void test();

// function clears the screen system call
// NOTE: system call is not a security best pracice!
void clearScreen() {
    // use "cls" in windows and "clear" command in Mac and Linux
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}

int main()
{
    int x1, y1, x2, y2; // variables to store two points (x1, y1) and (x2, y2)
    char ch;
    double distance = 0.0;
    bool isRunning = true;
    //FIXME-bonus - 10 bonus points - add loop until user wants to quit
    // the loop will execute the following block of code
    while (isRunning)
    {
        clearScreen();
        cout << "Program calculates distance between 2 points on a 2D coordinate." << endl;
        cout << "Enter a point in the form (x, y): ";
        // parse the input stream
        cin >> ch >> x1 >> ch >> y1 >> ch; // value stored in ch is ignored
        printf("(x1, y1) = (%d, %d)\n", x1, y1);

        cout << "Enter a second point in the form (x, y): ";
        cin >> ch >> x2;
        cin >> ch >> y2;
        printf("(x2, y2) = (%d, %d)\n", x2, y2);
        //FIXME3 - Read/parse the second point and store data into variables x2 and y2
        void test();
        //FIXME4 - Call test function

        //FIXME5 - call findDistance function passing proper arguments
        distance = findDistance(x1, y1, x2, y2);
        //FIXME6 – Using printf function display the returned distance with proper description
        printf("Distance between the two points: %f", distance); 

    cin.ignore(1000, '\n');
    cout << "Would you like to keep program running? \n";
    cin >> ch;
    if(ch =='Y')
    {
        isRunning = true;
    }
    else 
    {
        isRunning = false;
        cout << "Good bye..." << endl;
        return 0;
    }
    }
}

double findDistance(int x1, int y1, int x2, int y2)
{
     cout << "This program will now find the distance between the two points... ";
         double distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
         cout << distance << endl;

    // FIXME7 - Find the distance between (x1, y1) and (x2, y2)
    // following the algorithm in step 1
    // return the calculated distance
    return distance;
}

// test function that test findDistance function with 3 test cases
void test()
{
    float result0 =  findDistance(4, 3, 5, 1);
    float expected0 = 2.236067f;
    assert( fabs(result0 - expected0) <= epsilon); //accept the result if it's less than the error of margin
    float result1 = findDistance(5, 6, 7, 0);
    float expected1 = 6.32455532f;
    assert( fabs(result1 - expected1) <= epsilon);
    float result2 = findDistance(3, 2, 4, 5);
    float expected2 = 3.16227766f;
    assert( fabs(result2 - expected2) <= epsilon);
    // FIXME8 - add at least two more test cases
    cerr << "all tests passed..." << endl;
}