/*
Name: Leanza Armamento

Lunch Picker
*/
#include <iostream>

using namespace std;

strig promptName();
void greetName(string);
void getThings(string& pType, float& money, int& distance, string& mood);
void lunchPicker (const string&, const float&, const int&, const string&);

int main()
{
    // string person;
    // person = promptName();
    // greetName(person);
    string pType;
    float money;
    int distance;
    string mood;

    getThings (pType, money, distance, mood);

    greetName(promptName());

    //protein type: [meat/veggies/fish]
    //amount $ : $
    //distance : 
    //mood : fast/sit/togo

    //Five Guys
    //Texas Roadhouse 
    //Waffle House
    //Raising Cane's
    //Koi Sushi Ramen
    //Pho 88
    //Los Jilberto's
    if(money < 10)
    {
        if (distance > 150)
        {
            //Waffle House
            //Raising Cane's
        }
        else
        {
            cout << "Get some super fried at Los J's" << endl;
            //Los Jilbertos 
        }

    }
    else if(money < 20)
    {
        if(pType == "veggies" || pType == "fish")
        {
            cout << "No "
        }
        else{
            cout << "A bacon cheeseburger with fries from Five Guys."
        }
        //Five Guys
        //Pho 88
    }
    else
    {
        if(mood == "fish")
        {
            cout << "Get some sushi and ramen "
        }
        else{
            cout << "Go to Texas RoadHouse"
        }
        //Texas Roadhouse
        //Koi Sushi Ramen 
    }

}

void getThings(string& pType, float& money, int& distance, string& mood)
{
    cout <<"What protien type [meat/veggies/fish]? "
    cin >> pType;

    cout << "How much money do you want to spend? ";
    cin > money;

    cout << "How far do you want to go?"; 
    cin >> distance;

    cout << "What mood are you in to eat?";
    cin >> 
}
string promptName()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name)

    return name;
}

void greetName(string name)
{
    if(name == "Burton" || name == "Pat Sajak")
    {
        cout << "You don't deserve that chai tea" << endl;
    }
    else
    {
        cout << "Welcome to our lunch picker " << name << "." << endl;
    }
}