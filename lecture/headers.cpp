/*file headers*/

#include <iostream>

using namespace std;

void getSides(int&, int&);
int calcPerim(const int&, const int&);
int calcArea(const int&, const int&);
void printVals(const int, const int, const int, const int)
int main(int argc, char* argv[])
{
    void getSides(int& s1, int& s2)
    {
        cout << "Please enter side 1: ";
        cin >> s1;
        if(cin.fail())
        {
            cout << "You didnt enter a whole number" << endl;
            cin.clear()
        }
    }
    cout << "Please enter side 2: ";
    cin >> s2;

    return 0;
}