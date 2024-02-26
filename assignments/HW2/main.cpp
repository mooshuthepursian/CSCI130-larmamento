/* 
Name: Leanza Armamento 
Purpose of Code: To program a code that will find the area and perimeter of a triangle 
*/
//Algorithim Steps:
// Greet user 
//  Display name prompt
//  Display welcome prompt with name

//  Prompt for side1, side2, side 3 (float)
//  Calc perimeter <perim= (side1) + (side2) + (side3)>
//  Calc area (area = (height * side3)/2)
//  Print out results

#include <iostream>
#include <string>
#include <cstdio>
#include <cassert>

using namespace std;

int main() 
{
	double side1=0, side2=0, side3=0 , area=0, perimeter=0, height=0;
    string name = "User";
	cout << "Hi there, what's your first and last name? ";
    string inputName;
    cout << ": ";
    getline(cin, inputName); 

	cout << "Nice meeting you, " << inputName << "!" << endl;

	cout << "\nProgram finds area and perimeter of a triangle using the side lengths and height.\n\n";

	cout << name << ", please enter the right side length of your triangle: ";
	cin >> side1; 

    cout << name << ", please enter the left side length of your triangle: ";
	cin >> side2; 

    cout << name << ", please enter the bottom side length of your triangle: ";
	cin >> side3;

    cout << name << ", please enter height of your triangle: ";
	cin >> height; 

	area = ((height * side3)/2); 
	perimeter = (side1 + side2 + side3);

	cout << "Area of the triangle is:\t" << area << '\n';
	cout << "Perimeter of the triangle is:\t" << perimeter << '\n';

	// the following code may be required to make your console pause...
	cout << "Good bye...\nHit enter to exit the program!" << '\n';
	cin.ignore(1000, '\n'); 
	cin.get();
	return 0;
}