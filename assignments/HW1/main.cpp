/* 

Leanza Armamento 
C++ program that prints various stages/gallows of the hangman game

*/

#include <iostream>

using namespace std;

int main()

{
    string fName, lName;

    cout << "What is your first and last name?";

    cin >> fName >> lName;
    getline(cin, fName);

    cout << "Welcome" << fName
        << " to our program." << endl;
    return 0;
}