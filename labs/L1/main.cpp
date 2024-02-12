/*
    StdIO Lab
    ASCII Art - using literals and variables
    
    Updated BY: <Leanza Armamento> 
    Date: 11-Feb-24
    
    This program produces an ASCII art on the console.
    
    Algorithm steps:
    1. Use variables to store data/values
    2. Write a series of cout statements to print the data/values
*/

#include <iostream> //library for input and output
#include <string> //library for string data

using namespace std; //resolve cout, cin, and endl names

//main entry point of the program
int main()
{
    string fName, lName;

    cout << "What is your first and last name?";

    cin >> fName >> lName;
  
    cout << "Nice to meet you " << fName << " " << lName << endl;

    cout << "Hope you like my Tom & Jerry ASCII art...\n\n";

    string line1 = "  |\\_/|   **********************    (\\_/)\n";
    cout << line1;
    string line2 = " / @  @ \\ *       ASCII Lab     *  (='.'=)\n";
    cout << line2;
    cout << "( > 0 < )   *   By: <Leanza>     *  ("")_("")"<< endl;
    string line3 = "  >>x<<   *       CSCI 111      * \n";
    cout << line3;
    string line4 = " /  O \\   **********************\n";
    cout << line4;
  
    cout << "\nGood bye.. hit enter to exit the program: " << '\n';
        cin.get();
        cin.ignore (1000, '\n');
        getchar();

    return 0; //exit program by returning 0 status to the system
}