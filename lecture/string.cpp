/* Strings
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    string fName = "Leanza";

     fName = fName + "Armamento";
    // // fName += "Armamento";
    // fName.append("Armamento");
    // fName.append("The Almighty Tallest");
    // cout << "fName: " << fName << endl;
    
    cout << fName << endl;
    int insertPos = 7;
    fName.insert(7, "The Greatest ");
    cout << fName << endl;

    for(int i = 0; i < fName.length(); i++)
    {
        int spaceIdx = fName.find(' ', i);
        int spaceIdx2 = fName.find(' ', spaceIdx + 1);

        // if(i == 0)
        // {
        //     spaceIdx2 = 0; 
        // }

        cout << "substring: " << fName.substr(i, spaceIdx2 - spaceIdx - i) << endl;
        i += (spaceIdx - i);
        // cout << "DEBUG: i: " << i << endl;
        if(i < 0)
        {
            break
        }
    }

    // // cout << fName.find(' ') << endl;
    // int spaceIdx = fName.find(' ');
    // int spaceIdx2;
    // cout << fName.substr(0, fName.find(' ')) << endl;

    // space Idx2 = fname.find(' ', spaceIdx);
    // cout << fName.substr(spaceIdx + 1, spaceIdx2 - spaceIdx);

    // string firstName = fName.substr(0, 6);
    // string title = fName.substr(7, 13);
    // string lName = fName.substr(20);
    // cout << "firstName: "<< firstName << endl;
    // cout << "title: " << title << endl;
    // cout << "lName: " << lName << endl;

    // cout << fName.front() << endl;

    // for(size_t i=0; i < fName.length(); i++)
    // {
        // cout << "fName[" << i << "]: "
        //      << fName[i] << endl;
    //  cout << "fName.at()"
    // }
    string myString = "Leanza Armamento";

    // cout ,, "myString[0]: " << myString[0] << endl;
    for(size_t i=0; i<14; i++)
    {
        cout << "myString[" << i << "]: "
            << myString[i] << endl;
    }
}