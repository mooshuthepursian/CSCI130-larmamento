/*
Name: Leanza Armamento

Loops again, and again, and again, ....
*/

#include <iostream>

using namespace std;

int main()
{
    int someNumber;
    // init      cond     updater
    for (int i= 0 ; i < 10 ; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << ": Hello World" << endl;
        //someNumber = 42;
        // cout << "Press enter to get the next one";
        // cin.get();
        
    }

    cout << "After for loop" << endl;

    //cout << "Hello World" << endl;
    //cout << "Hello Wirld" << endl;
    //cout << "Hello Wirld" << endl;
    //cout << "Hello Wirld" << endl;
    //cout << "Hello Wirld" << endl;
    //cout << "Hello Wirld" << endl;
    //cout << "Hello Wirld" << endl;
    //cout << "Hello Wirld" << endl;
    //cout << "Hello Wirld" << endl;
    return 0;
}