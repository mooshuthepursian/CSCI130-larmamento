/* Arrays */
#include <iostream>

using namespace std;

int addNums(int [], int);

int main(int argc, char* argv[])
{
    int*heapNums = new int[10];

    cout << "&heapNums: " << &heapNUms << endl;
    for(size_t i=0; i < 10; i++)
    {
        cout << "&heapNums[" << i << "]: " << &heapNums[i] << endl;
    }
     for(size_t i=0; i < 10; i++)
    {
        cout << "Please enter a number: ";
        cin >> *(heapNums + i);
    }
     for(size_t i=0; i < 10; i++)
    {
        cout << *(heapNums + i) << " ";
    }
    
    // size_t arrSize = 5;
    // cout << "how many numbers do you want? ";
    // cin >> arrSize;
    // int numbers[arrSize];

    // for(size_t i=0; i < arrSize; i++)
    // {
    //     cout << "Enter a number: " ;
    //     cin >> numbers[i];
    // }

    ptr = &numbers[0];
    // cout << *ptr << endl;
    for(int i=0; i<5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;

    cout << "The sum of the "

    // cout << numbers << endl;
    // cout << &numbers[0] << endl;
    // cout << &numbers[1] << endl;
    // cout << &numbers[2] << endl;
    // cout << &numbers[3] << endl;
    // cout << &numbers[4] << endl;

    delete[] heapNums; 
    return 0;
}

int addNums(int numbers[], int arrSize)
{
    cout << sizeof(numbers) << endl;
    int sum=0;
    for(int i=0; i < arrSize; i++)
    {
        // sum += *(numb ers +i);
        // sum = sum + *(numbers + i);
        sum = sum +numbers[i];
    }
    return sum;
}