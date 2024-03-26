/* Strings
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    string myString = "Leanza Armamento";

    // cout ,, "myString[0]: " << myString[0] << endl;
    for(size_t i=0; i<14; i++)
    {
        cout << "myString[" << i << "]: "
            << myString[i] << endl;
    }
}