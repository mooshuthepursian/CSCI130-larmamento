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
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;


void displayHangman(int wrongGuesses) 
{
    if (wrongGuesses == 0) 
    {
        cout << "Stage 1" << endl;
        cout << "______" << endl;
        cout << "|     " << endl;
        cout << "|     " << endl;
        cout << "|     " << endl;
        cout << "|     " << endl;
        cout << "------" << endl; 
    } 
    else if (wrongGuesses == 1) 
    {
        cout << "Stage 2" << endl;
        cout << "______" << endl;
        cout << "|  0  " << endl;
        cout << "|     " << endl;
        cout << "|     " << endl;
        cout << "|     " << endl;
        cout << "------" << endl; 
    } 
    else if (wrongGuesses == 2) 
    {
        cout << "Stage 3" << endl;
        cout << "______" << endl;
        cout << "|  0  " << endl;
        cout << "|  |  " << endl;
        cout << "|     " << endl; 
        cout << "|     " << endl;
        cout << "------" << endl;
    } 
    else if (wrongGuesses == 3) 
    {
        cout << "Stage 4" << endl; 
        cout << "______" << endl;
        cout << "|  0  " << endl;
        cout << "| /|  " << endl;
        cout << "|     " << endl; 
        cout << "|     " << endl;
        cout << "------" << endl;
    } 
    else if (wrongGuesses == 4) 
    {
        cout << "Stage 5" << endl;
        cout << "______" << endl;
        cout << "|  0  " << endl;
        cout << "| /|\\ " << endl;
        cout << "|     " << endl; 
        cout << "|     " << endl;
        cout << "------" << endl;
    } 
    else if (wrongGuesses == 5) 
    {
        cout << "Stage 6" << endl; 
        cout << "______" << endl;
        cout << "|  0  " << endl;
        cout << "| /|\\ " << endl;
        cout << "| /   " << endl; 
        cout << "|     " << endl;
        cout << "------" << endl;
    } 
}
vector<string> readWordsFromFile(const string& filename) //help from tlc center, stackoverflow, and chat gpt in understanding
{
    vector<string> words;
    ifstream inputFile(filename);
    string word;
    while (inputFile >> word)
    {
        words.push_back(word);
    }
    inputFile.close();
    return words;
}

string chooseWord(const vector<string>& words)  
{
    srand(static_cast<unsigned int>(time(0)));
    int randomIndex = rand() % words.size();
    return words[randomIndex];
}

string initializeDisplayWord(const string& word) 
{
    string displayWord(word.length(), '_');
    return displayWord;
}


void game() 
{
    string difficulty;
    cout << "****************************************************************************************" << endl;
    cout << "How difficult do you want the game to be? Options: Easy, Medium, Hard, Impossible) " << endl;
    cout << "****************************************************************************************" << endl;
    cout << "Easy: consists of 3 letter words." << endl;
    cout << "****************************************************************************************" << endl;
    cout << "Medium: consists of 5 letter words." << endl;
    cout << "****************************************************************************************" << endl;
    cout << "Hard: consists of 7 letter words." << endl;
    cout << "****************************************************************************************" << endl;
    cout << "Impossible: consists of 10+ letter words." << endl;
    cout << "****************************************************************************************" << endl;
    cout << "Type the level you want (WARNING: CASE SENSITIVE):" << endl;
    cin >> difficulty;

    string filename;
    if (difficulty == "Easy") 
    {
        filename = "easy.txt";
    } 
    else if (difficulty == "Medium") 
    {
        filename = "medium.txt";
    } 
    else if (difficulty == "Hard") 
    {
        filename = "hard.txt";
    } 
    else if (difficulty == "Impossible") 
    {
        filename = "impossible.txt";
    } 

    vector<string> words = readWordsFromFile(filename);

    string word = chooseWord(words);
    string displayWord = initializeDisplayWord(word);
    
    int wrongGuesses = 0;
    const int maxWrong = 6;
    vector<char> guessedLetters;

    while (wrongGuesses < maxWrong && displayWord != word) 
    {
        displayHangman(wrongGuesses);
        cout << "Amount you can get wrong remaining: " << maxWrong - wrongGuesses << endl;
        cout << "Word: " << displayWord << endl;
        char guess;
        cout << "Enter your guess: ";
        cin >> guess;
        bool correctGuess = false;
        for (size_t i = 0; i < word.size(); ++i) 
        {
            if (word[i] == guess) 
            {
                if (displayWord[i] == '_') 
                {
                    displayWord[i] = guess;
                    correctGuess = true;
                } 
                else 
                {
                    cout << "You've already guessed that letter!" << endl;
                }
            }
        }
        if (!correctGuess) 
        {
            ++wrongGuesses;
        }
    }

    if (displayWord == word) 
    {
        cout << "Congratulations! You guessed the word: " << word << endl;
        cout << "Will you get it next time though??" << endl;
    } 
    else 
    {
        cout << "Stage 7" << endl;
        cout << "______" << endl;
        cout << "|  0  " << endl;
        cout << "| /|\\ " << endl;
        cout << "| / \\ " << endl; 
        cout << "|     " << endl;
        cout << "------" << endl;
        cout << "NOOOOOOOOOOO you ran out of guesses, so you lose :(" << endl;
        cout << "The word was: " << word << endl;
    }
}

int main()
{
    string playGameAgain;
    string fName;
    cout << "Hello! What is your name?" << endl;
    cin >> fName;
    cout << "Hello, " << fName << ". Welcome to my hangman game!" << endl;
    cout << "     To play the game, players must guess letters to uncover" << endl; 
    cout << "     a hidden word within a limited number of attempts, with " << endl;
    cout << "     each incorrect guess resulting in the drawing of a segment of a" << endl;
    cout << "     gallows until the word is guessed correctly or the gallows is completed." << endl;
    
    do 
    {
        game();
        cout << "Do you want to play the game again? (y/n): ";
        cin >> playGameAgain;
    }
    while (playGameAgain == "y" || playGameAgain == "Y");
    
    return 0;
}
