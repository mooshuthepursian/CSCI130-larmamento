/*
Palindrome checker

1) Greet User 
2) Prompt for a string 
3) Check if Palindrome. A string which is the same forwards and backwards
    a) create a loop    
        z) if only zero or one letter, return true
    b) each iteration of loop, check if first character is the same as the last.
        Case insensitive, ignore anything which is not A-Z
    c) move in one character
    d) if all same, return true, else return false
4) Print out result 
/*

#include <string>
#include <iostream>

using namespace std;

string getName();
void greetName(string);

int main(int argc, char* argv[])
{
    string name; 
    name = getName();
    greetName(name); 

    return 0;
}

string getName()
{
    string name; 
    
}