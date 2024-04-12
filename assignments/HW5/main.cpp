/* 
Name: Leanza Armamento 
Date: 3/28/24
CSCI130 HW5
Loops Guess the Number

Intructions: 
Write algorithm steps at the top of the program as comments. (10 points)
1) Ask the player's name and greet the player. (5 points)
2) Define a function called randomNumber that generates and returns a random number between 1 and 20. (5 points)
3) Define a function called readNumber that prompts the user to take a guess and return the guessed number. (10 points)
4) Validate the guessed number to be between 1 and 20.
5) Define a function called checkGuess that takes two integers compares the two numbers and returns the following result: (10 points)
6) return 0 if the numbers are equal
7) return -1 if the first number is less than second
8)return 2 otherwise
9) Write 3 test cases for checkGuess function using assert statement. (10 points)
10) Define a function called game that implements the logic of the guess the number game. (25 points)
Call the randomNumber function defined above to generate a random number for the user to guess for each game.
Until the game is over, your program will ask the player to guess the number using the readNumber function defined above.
Use the function defined above called checkGuess to compare the user entered number with the hidden random number.
If the player guesses the number within six tries, the game is over and the player wins.
If the player can't guess the number within six tries, the game is over and the player loses.
For every wrong guess, your program informs the player whether the guess is too high or too low by calling checkGuess function.

When the game is over, your program will inform whether the player won or lost the game and reveal the secret random number picked by the computer, especially if they lose. (5 points)
Your game will continue to run until the user wants to quit when the game is over. (10 points)
Bonus (10 points): When the user quits the program/game, your program provides the following stats of the player:
number of times played
percentage of times won
percentage of times lost
*/


#include <iostream>
#include <cstdio>
#include <cmath>
#include <cassert>
#include <ctime>
using namespace std;

double playerguess = 0;
const float epsilon = 1e-5;
double multitries = 6;


// Define a function called randomNumber that generates and returns a random number between 1 and 20. (5 points)
int randomNumber (void)
{
    srand(time(0));
    cout << rand() % 20 *1 << endl;
    return 0; 
}

// Define a function called readNumber that prompts the user to take a guess and return the guessed number. (10 points)
int readNumber (void)
{
    cout << "You get 6 tries to guess the number. Please try to guess a number between 1-20: " << endl;
    cin >> playerguess; 
    cout << "You have guessed: " << playerguess << endl; 
    int playerguess;
    while(true);
    if (playerguess >= 1 && playerguess <= 20) 
    {
        return playerguess;
    } 
    else 
    {
        cout << "Please enter a number between 1 and 20." << endl;
    }
}

// 4) Validate the guessed number to be between 1 and 20.
// 5) Define a function called checkGuess that takes two integers compares the two numbers and returns the following result: (10 points)
int checkGuess (int num1, int num2)
{
    if (num1 == num2)
    {
        return 0;
    }
    else if (num1 < num2)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}
void game () 
{
double readNum=0;
double randNum=0;
int playerguess = 0;
bool won = true;
}

for(int i=0; i <6; i++)
{
    playerguess = 
}

int main()
{
string name = "User";
	cout << "Hi there, what's your first and last name? ";
    string inputName;
    cout << ": ";
    getline(cin, inputName); 

cout << "Nice meeting you, " << inputName << "!" << endl;
cout << "Welcome to the Number Guessing Game!" << endl;
randNum= randomNumber();
readNum= readNumber();

//  while(playerguess && multitries < 6)
//  {
//      cout << "" << endl;
//  }

//  while(playerguess && multitries >=6)
//  {
//      cout << "You lose, no more tries." << endl;
//  }
return 0;
}

void test()
{
    double test1=6, test2=7, test3=1, test4=9, test5=4, test6=24;
    assert(checkGuess (test1, test2) == -1);
    assert(checkGuess (test3, test4) == -1);
    assert(checkGuess (test5, test6) == -1);
}


    