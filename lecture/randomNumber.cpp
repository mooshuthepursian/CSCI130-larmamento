/*
Leanza Armamento
*/
#include <iostream>
#include <random>

using namespace std;

int randomNumber();

int test(int argc, char* argv[])
{
    srand(123456);
    cout << randomNumber() << endl;
    cout << randomNumber() << endl;
    cout << randomNumber() << endl;
    cout << randomNumber() << endl;
    cout << randomNumber() << endl;
    cout << randomNumber() << endl;
    return 0;
}

int main(int argc, char* argv[])
{
    srand(time(0));
    cout << "Random: " << rand(%20+1) << endl;
    cout << "Random: " << rand(%20+1) << endl;
    cout << "Random: " << rand(%20+1) << endl;
    cout << "Random: " << rand(%20+1) << endl;
    cout << "Random: " << rand(%20+1) << endl;
    cout << "Random: " << rand(%20+1) << endl;
    cout << "Random: " << rand(%20+1) << endl;
    cout << "Random: " << rand(%20+1) << endl;
    cout << "Random: " << rand(%20+1) << endl;
    cout << "Random: " << rand(%20+1) << endl;
    cout << "Random: " << rand(%20+1) << endl;
    
    return 0;
}

int randomNumber()
{
    return rand(%20+1)
}