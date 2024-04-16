//  Pointers, enum type and namespace lab
//  Updated by: Leanza Armamento
//  Date: 4/16/24
//  Program demonstrates the use of preprocessor directive, namespace, enum type,
//  and pointers.

#include <cstdio>
#include <iostream>

using namespace std;

// macro function
#ifdef _WIN32
#define clear() system("cls")
#else
#define clear() system("clear")
#endif

// user-defined enumerated type OPERATION
enum OPERATION { ADD, MULTIPLY, SUBTRACT, LARGER, QUIT };

// C++ way of defining type alias
using big_int = long long int;

// C way of defining type alias
typedef long long int large_int;
// both large_int and big_int are alias to long long int type

// declare MyFunctions namespace
namespace MyFunctions {
    // function prototypes defined within the namespace
    big_int findSum(const big_int *, const big_int *);
    big_int findLarger(const big_int *, const big_int *);
    large_int findProduct(const large_int &, const large_int &);
    large_int findDifference(const large_int &, const large_int &);
}

void showMenu();
OPERATION getOperation(char);
void clearScreen() 
    {
    // use "cls" in windows and "clear" command in Mac and Linux
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
    }

int main(int argc, char* argv[]) {
    char input;
    big_int *num1; // a pointer to point that points to unsigned int aka big_int data type
    num1 = new big_int; //allocate memory in heap and store the address in num1
    big_int *num2 = new big_int; //declare num2 as a dynamic variable
    large_int *sum = new large_int; //declare sum as a dynamic variable
    large_int *prod = new large_int;
    // FIXME3 - declare dynamic variables to store difference and larger values
    large_int *diff = new large_int;
    // Must use these variables to store the returned values from functions

    OPERATION oper;
    
    //FIXME4: Add do... while loop to continue the program until the user wants to quit
    //FIXME5: call clear function defined above to clear the screen
    do 
    {
        clearScreen();

        showMenu();
        cin >> input;
        oper = getOperation(input);
        switch (oper) {
        case ADD:
            cout << "Enter two whole numbers separated by space: ";
            // store the data by dereferencing pointers
            cin >> *num1 >> *num2;
            // passing pointers to findSum function
            *sum = MyFunctions::findSum(num1, num2);
            printf("%lld + %lld = %lld\n", *num1, *num2, *sum);
            break;
            // FIXME6: complete the rest of the cases to perform other operations
        case MULTIPLY:
            cout << "Enter two whole numbers separated by space: ";
            // store the data by dereferencing pointers
            cin >> *num1 >> *num2;
            // passing pointers to findSum function
            *prod = MyFunctions::findProduct(*num1, *num2);
            printf("%lld * %lld = %lld\n", *num1, *num2, *prod);
            break;
        case SUBTRACT:
            cout << "Enter two whole numbers seperated by a space: ";
            cin >> *num1 >> *num2;
            *prod = MyFunctions::findDifference(*num1, *num2);
            printf("%lld * %lld = %lld\n", *num1, *num2, *diff);
            break;
        default:
            break;
    }}
    while (input == 'y' || input == 'Y');

    delete num1;
    delete num2;
    delete sum;
    delete prod;

    
    cout << "Would you like to continue running the program? Y/y? If you would like to quit the program press any other key." << endl;
    cin >> input;
    cin.ignore(1000, '\n');
    cout << "Good bye! Enter to exit the program...";
    cin.get();

    return 0;
}



void showMenu() {
    cout << "Enter one of the following menu options:\n";
    cout << "[1] Add two integers\n";
    cout << "[2] Multiply two integers\n";
    cout << "[3] Subtract one integer from another\n";
    cout << "[4] Quit the program\n";
    cout << "Enter your choice [1-4]: ";
}

// function returns OPERATION type given character choice
OPERATION getOperation(char choice) {
    OPERATION op;
    switch(choice)
    {
        case '1':
            op = ADD;
            break;
        case '2':
            op = MULTIPLY;
            break;
        case '3':
            op = SUBTRACT;
            break;
        // FIXME7 - add case for LARGER
        default:
            op = QUIT;
    }
    return op;
}

// must use MyFunctions namespace to resolve findSum function
big_int MyFunctions::findSum(const big_int *n1, const big_int *n2) {
    // deference pointers n1 and n2 before adding their values
    return (*n1) + (*n2);
}

// FIXME8: define findLarger function declared inside MyFunctions namespace
// function returns the larger of the two given values

large_int MyFunctions::findProduct(const large_int &n1, const large_int &n2) {
    return n1 * n2;
}

// FIXME9: define findDifference function declared inside MyFunctions namespace
// return the value of second big_int subtracted from the first