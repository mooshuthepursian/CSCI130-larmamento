/*
By: Leanza Armamento 
CSCI130-001
Falling Apart
Steps: 
1) Ask for the number that will need to be split. 
2) Seperate odds and evens. 
3) Alice gets all of the odd numbers.
4) Bob gets all of the even numbers. 
5) Show the user the sum of both Alice's and Bob's items
*/

#include <iostream>
#include <algorithm> 
#include <functional> 
#include <vector>
#include <cassert>

using namespace std;

void splitPieces(int randoNum, const vector<int>& pieces, int& AliceNum, int& BobNum) 
{
    AliceNum = 0;
    BobNum = 0;
    for (int i = 0; i < randoNum; ++i) 
    {
        if (i % 2 == 0) 
        { 
            AliceNum += pieces[i];
        }
        else 
        { 
            BobNum += pieces[i];
        }
    }
}

void testSplitPieces() //used chatGPT in order to understand how vectors work 
{
    int randoNum1 = 3;
    vector<int> pieces1 = {3, 2, 1};
    int AliceNum1, BobNum1;
    splitPieces(randoNum1, pieces1, AliceNum1, BobNum1);
    assert(AliceNum1 == 4 && BobNum1 == 2);

   
    int randoNum2 = 5;
    vector<int> pieces2 = {10, 8, 5, 4, 2};
    int AliceNum2, BobNum2;
    splitPieces(randoNum2, pieces2, AliceNum2, BobNum2);
    assert(AliceNum2 == 17 && BobNum2 == 12);

    cout << "All test cases passed successfully." << endl;
}

int main() //michael taught me how to use sort function 
{
    int randoNum = 0;
    cout << "Please enter the number in which Alice and Bob need to split: " << endl;
    cin >> randoNum;

    vector<int> pieces(randoNum); 

    cout << "Please enter the values of the pieces that they need to split: " << endl;
    for (int i = 0; i < randoNum; ++i)
    {
        cin >> pieces[i];
    }

    sort(pieces.begin(), pieces.end(), greater<int>()); 

    int AliceNum = 0, BobNum = 0;
    for (int i = 0; i < randoNum; ++i)
    {
        if (i % 2 == 0) 
        {
            AliceNum += pieces[i];
        }
        else 
        {
            BobNum += pieces[i];
        }
    }

    cout << "SUM OF ODD: Alice's pieces are..."<< AliceNum << endl;
    cout << "SUM OF EVEN: Bob's pieces are..." << BobNum << endl;

    testSplitPieces(); 

    return 0;
}

