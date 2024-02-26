/*
Name: Leanza Armamento
conditionals
*/

#include <iostream>

using namespace std;


// bool isEvenandNegative(int);
// void addNums();
// void subNums();
int& checkNumber(int&. const int&);
 int main()
{
    // cout << boolalpha << (42 == 42) << endl;
    // cout << boolalpha << (42 != 41) << endl;
    // cout << boolalpha << (42 > 42) << endl;
    // cout << boolalpha << (42 >= 42) << endl;
    // cout << boolalpha << (42 < 42) << endl;
    // cout << boolalpha << (42 <= 42) << endl;

    // cout << boolalpha << !(42 != 42) << endl; 
    // cout << boolalpha << !(42 == 42) << endl;

    //   int num1;
    //   bool result; 

    //    cout << "Enter a number: ";
    //    cin >> num1;
    //    cin.get();

    //    result = isEvenandNegative(num1);


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
     return 0; 
 }

void tests()
{
    assert(checkNumber(42, 15) == 1);
    assert(checkNumber(15, 42) == -1);
    assert(checkNumber(42, 42) == 0);
    assert(checkNumber(-32, -7) == -1);
    cout << "All test cases passed" << endl;
}
//bool isEvenandNegative(int num1)
// void addNums()
// void subNums()
int checkNumber(int, int);

int main()
{
    int num1, num2;
    int result;

    cout << "Please enter two numbers seperated by a space: ";
    cin >> num1 >> num2;

    result = checkNumber (num1, num2);

    if (result == 1) 
    {
        cout << "num1 > num2" << endl;
    }

    else if (result == -1)
    {
        cout << "num1 < num2" << endl;
    }

    else
    {
        cout << "num1 == num2" << endl;
    }
    //check if n1 > n2, return 1
    //check if n1 < n2, return -1
    //check if they are equal return 0
    if(n1 > n2)
    {
        return 1
    }

    if(n1 < n2)
    {
        return -1
    }
    
    if(n1 == n2)
    {
        return 0
    }
}
{
    // long selection;
    // cout << "[1]: Add Numbers" << endl;
    //      << "[2]: Subtract Numbers" << endl;
    //      << "[9]: Exit" << endl;
    // cout << "Choose an option: ";
    // cin >> selection;
    // switch(selection)
    // {
    //     case 'A':
    //         cout << "We will add numbers" << endl;
    //         addNums();
    //         break;
    //     case 66: 
    //         cout << "We subtract some numbers" << endl; 
    //         subNums();
    //         break;
    //     case 'Z': 
    //         cout << "We are quitting" << endl;
    //         break;
    //     default:
    //         cout << "You didn't eter a valid option. Try again." << endl;
    }
    
    // int num1 = 0;

    // switch(num1)
    // { 
    //     case 0:
    //         cout << "num1 is zero" << endl;
    //     case 1:
    //         cout << "num1 is 1" << endl;
    //         break;
    //     default:
    //         cout << "num1 is something else" << endl;
    // }
    // if((num1%2 == 0 && num1 > 0) || (num1 == 0))
    // {
    //     cout << num1 << " is even and positive. " << endl;
    //     //cout << num1 << " is odd or negative or both." << endl;
    // }
    // else 
    // {
    //     //cout << num1 << " is odd and negative." << endl;
    //     cout << num1 << "is odd or negative or both." << endl;
    //     //cout << num1 << " is even and positive." << endl;
    // }
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
    return 0
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
    // if (num1 > 0) 
    // {
    //     cout << num1 << "is positive" << endl;
    // }
    // else if (num1 == 0)
    // { 
    //     cout << nunm1 << "is zero" << endl;
    // }
    // else 
    // {
    //     cout << num1 << "is negative" << endl;
    // }
    //  return true; 
//}

