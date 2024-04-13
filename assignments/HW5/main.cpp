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
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <string>
using namespace std;

// Define a function called randomNumber that generates and returns a random number between 1 and 20.
int randomNumber() {
    srand(time(0));
    return rand() % 20 + 1;
}

// Define a function called readNumber that prompts the user to take a guess and return the guessed number.
int readNumber() {
    int playerguess;
    cout << "You get 6 tries to guess the number. Please try to guess a number between 1-20: " << endl;
    do {
        cin >> playerguess;
        if (playerguess >= 1 && playerguess <= 20) {
            break;
        } else {
            cout << "Please enter a number between 1 and 20." << endl;
        }
    } while (true);
    return playerguess;
}

// Define a function called checkGuess that takes two integers compares the two numbers and returns the following result:
int checkGuess(int num1, int num2) {
    if (num1 == num2) {
        return 0;
    } else if (num1 < num2) {
        return -1;
    } else {
        return 1;
    }
}

void game() {
    int randNum = randomNumber();
    int playerGuess;
    bool won = false;

    for (int i = 0; i < 6; i++) {
        playerGuess = readNumber();
        int stats = checkGuess(playerGuess, randNum);
        if (stats == 0) {
            won = true;
            cout << "You may have won this time, but next time I will get you!!!!!!!!!!" << endl;
            break;
        } else if (stats == 1) {
            cout << "Almost, your guess is too high" << endl;
        } else {
            cout << "Almost, your guess is too low" << endl;
        }
    }

    if (!won) {
        cout << "You lose :(" << endl;
        cout << "The random number is: " << randNum << endl;
    }
}

int main() {
    string playGameAgain;
    bool keepRunning = true;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        game();
        cout << "Do you want to play the game again? (Y/N): ";

        if (playGameAgain != "Y" && playGameAgain != "y") {
            keepRunning = false;
        }
    } while (keepRunning);

    return 0;
}

void test()
{
    double test1=6, test2=7, test3=1, test4=9, test5=4, test6=24;
    assert(checkGuess (test1, test2) == -1);
    assert(checkGuess (test3, test4) == -1);
    assert(checkGuess (test5, test6) == -1);
}
    