/*
By: Leanza Armamento
Date: 4/18/24
APAXIAAANSSSSSSS

Instructions:
1) Ask the player to type in a name that they want to convert to a simpler version. 
2) Each name contains only lowercase letters (a–z), no whitespace, a minimum length of 1 character, and a maximum length of 250 characters.
3) Print out the simpler version of the name. 
4) Using function(s) design your solution in such a way that it can be tested independently using unit testing with assert statements (40 points).
5) Write a test function that automatically tests (using assert statements)  for at least three different input values other than the ones provided by the problem (20 points).
6) Call the test function in main and execute it when a “test” argument is provided to your program or main(). (10 points)

*/

#include <iostream>
#include <string>
#include <cstdio>
#include <cassert>

using namespace std;


string simplifiedName(const string& inputName) 
{
    string simplifiedName; 

    simplifiedName = inputName[0]; 

    for (size_t i = 1; i < inputName.length(); ++i) // got help from michael couldn't understand logic 
    {
        if (inputName[i] != inputName[i - 1]) 
        {
            simplifiedName += inputName[i]; 
        }
    }

    return simplifiedName;
}
void test();

int main()
{
    string inputName;
	cout << "Hi there, what is the name you wish to make simpler?";
    cin >> inputName;

    string newName = simplifiedName(inputName);
    cout << "Simplified Name: " << newName << endl;

    return 0; 
}

void test()
{
    string test2= "bobbbbbbbbbbbbbb", test1= "robeeeerrrrt", test3="johhnnnnnn";
    assert(simplifiedName (test2) == "bob");
    assert(simplifiedName (test1) == "robert");
    assert(simplifiedName (test3) == "john");
}