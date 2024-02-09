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
        << " to the hangman game." << endl;
    cout << "Stage 1" << endl;
        cout << "______" << endl;
        cout << "|     "<< endl;
        cout << "|     "<< endl;
        cout << "|     "<< endl;
        cout << "|     "<< endl; 
        cout << "------ "<< endl; 
    cout << "Stage 2" << endl;
        cout << "______" << endl;
        cout << "|  0  " << endl;
        cout << "|     " << endl;
        cout << "|     " << endl;
        cout << "|     " << endl;
        cout << "------" << endl; 
    cout << "Stage 3" << endl;
        cout << "______" << endl;
        cout << "|  0  " << endl;
        cout << "|  |  " << endl;
        cout << "|     " << endl; 
        cout << "|     " << endl;
        cout << "------" << endl;
    cout << "Stage 4" << endl; 
        cout << "______" << endl;
        cout << "|  0  " << endl;
        cout << "| /|  " << endl;
        cout << "|     " << endl; 
        cout << "|     " << endl;
        cout << "------" << endl;
    cout << "Stage 5" << endl;
        cout << "______" << endl;
        cout << "|  0  " << endl;
        cout << "| /|\\ " << endl;
        cout << "|     " << endl; 
        cout << "|     " << endl;
        cout << "------" << endl;
    cout << "Stage 6" << endl; 
        cout << "______" << endl;
        cout << "|  0  " << endl;
        cout << "| /|\\ " << endl;
        cout << "| /   " << endl; 
        cout << "|     " << endl;
        cout << "------" << endl;
    cout << "Stage 7" << endl;
        cout << "______" << endl;
        cout << "|  0  " << endl;
        cout << "| /|\\ " << endl;
        cout << "| / \\ " << endl; 
        cout << "|     " << endl;
        cout << "------" << endl;
    return 0;
}