/*
Name: Leanza Armamento
conditionals
*/

#include <iostream>

using namespace std;

int main()
//{
    // cout << boolalpha << (42 == 42) << endl;
    // cout << boolalpha << (42 != 41) << endl;
    // cout << boolalpha << (42 > 42) << endl;
    // cout << boolalpha << (42 >= 42) << endl;
    // cout << boolalpha << (42 < 42) << endl;
    // cout << boolalpha << (42 <= 42) << endl;

    // cout << boolalpha << !(42 != 42) << endl; 
    // cout << boolalpha << !(42 == 42) << endl;

      int num1;
      bool result; 

       cout << "Enter a number: ";
       cin >> num1;
       cin.get();

       result = isEvenandNegative(num1);


    // if(num1 != num2)
    // {
    //     cout << "The statement is true" << endl;
    //     cout << num1 << " == " << num2 << endl;
    //     if(num1 == 0)
    //     {
    //         cout << "num1 is zero" << endl;
    //     }
    // }
    // else 
    // {
    //     cout << "The statement is false" << endl;
    //     cout << num1 << "!=" << num2 << endl;
    //     if (num1 < 0)
    //     { 
    //         cout << num1 << "is negative" << endl;
    //     }
    // }


    // if (num1 == num2)
    // {
    //     cout << "The  numbers are equal" << endl;
    // }
    // else 
    // {
    //     if (num1 > num2)
    //     {
    //         cout << num1 << ">" << num2 << endl;
    //     }
    //     else
    //     {
    //         cout << num1 << "<" << num2 << endl;
    //     }
    // }


    // if (num1 == num2)
    // { 
    //     cout << "The numbers are equal" << endl;
    // }
    // else if (num1 > num2)
    // {
    //     cout << num1 << " > " << num2 << endl;
    // }
    // else if (num1 < num2)
    // {
    //     cout << "<" << num2 << endl;
    // }

//     cout << "After if" << endl;
//     return 0; 
// }

bool isEvenandNegative(int num1)
{
    if((num1%2 == 0 && num1 > 0) || (num1 == 0))
    {
        cout << num1 << " is even and positive. " << endl;
        //cout << num1 << " is odd or negative or both." << endl;
    }
    else 
    {
        //cout << num1 << " is odd and negative." << endl;
        cout << num1 << "is odd or negative or both." << endl;
        //cout << num1 << " is even and positive." << endl;
    }
    // string name;

    // cout << "Enter your name: ";
    // getline(cin, name);
    // if (num1%2 == 0)
    // {
    //     cout << name << " your number " << num1 << " is even." << endl;
    // }
    // else
    // {
    //     cout << name << " your number " << num1 << " is odd." << endl;
    // }
}
// {
    // if (num1%2 != 0)
    // {
    //     cout << num1 << "is odd" << endl;
    // }
    // else
    // {
    //     cout << num1 << "is even" << endl;
    // }
    if (num1 > 0) 
    {
        cout << num1 << "is positive" << endl;
    }
    else if (num1 == 0)
    { 
        cout << nunm1 << "is zero" << endl;
    }
    else 
    {
        cout << num1 << "is negative" << endl;
    }
     return true; 
//}