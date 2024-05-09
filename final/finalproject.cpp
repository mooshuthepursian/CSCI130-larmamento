/*
By: Leanza Armamento 
CSCI130-001
HANGMANNNNNNNNNNNNNN FINAL PROJECT
Steps: 
1) Greet users and tell them welcome.
2) Tell them how to play hangman.
3) Create a text file called words.txt and include at least 20 English dictionary-based words. (5 points)
4) The program will read the list of words from the file into an array or vector data structure. (5 points)
5) Program chooses a random word from the array and starts asking the player to guess the word one character at a time until the player wins or runs out of predefined number of tries. (50 points)
6) Game continues until the player wants to quit. (10 points)
7) Include as many "bells and whistles" as possible to make the game entertaining and intuitive to play. (10 points)
8) Use as many functions as possible to break the problem into many subproblems (5 points)
9) Use header files and cpp files to break the code into multiple files (5 points)
*/

#include <iostream>
#include <algorithm> 
#include <functional> 
#include <vector>
#include <cassert>

using namespace std;

int main()
{
    cout << "Hello! What is your name?" << endl;
    cin >> fName << endl;
    cout << "Hello" << fName << "." << "Welcome to my hangman game. To play the game players must guess letters to uncover a hidden word within a limited number of attempts, with each incorrect guess resulting in the drawing of a segment of a gallows until the word is guessed correctly or the gallows is completed." << endl;
}