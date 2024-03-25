/* Arrays */
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int* someNumbers = new int[5];
    int numbers[5] = {10, 20, 30, 40, 50};


    // //REALLY REALLY BADD!!!!! never go beyond the end of an array
    // for(int i = 0, i < 10; i++)
    // {
    //      cout << numbers[i] << " ";
    // //    numbers[i] = 100;
    // }


    // int* num1 = new int;
    // char* someChar = new char;
    // int numbers[5]= {10, 20, 30 , 40, 50};
    // int moreNumbers[5];
    // int evenMoreNumber[5][5] = {{{10}, {20}, 30, 40, 50}, {60, 70, 80, 90, 100}, {}, {}, {}};
    // // int* moreNumbers;

    // for(int i = 0; i < 5; i++)
    // {
    //     moreNumbers[i] = numbers[i];
    // }

    // // moreNumbers = numbers;
    // // int* ptr; 

    // // ptr = &numbers[0];
    // // ptr = numbers;

    // for(int i = 0; i < 5; i++)
    // {
    //     // cout << *(numbers + i) << " ";
    //     // cout << numbers[i] << " ";
    //     // cout << *ptr << " ";
    //     // ptr++;
    // }
    // cout << endl;

    delete[] someNumbers;

    return 0; 
}

// int addNums(int [], int);

// int main(int argc, char* argv[])
// {
//     int*heapNums = new int[10];

//     cout << "&heapNums: " << &heapNUms << endl;
//     for(size_t i=0; i < 10; i++)
//     {
//         cout << "&heapNums[" << i << "]: " << &heapNums[i] << endl;
//     }
//      for(size_t i=0; i < 10; i++)
//     {
//         cout << "Please enter a number: ";
//         cin >> *(heapNums + i);
//     }
//      for(size_t i=0; i < 10; i++)
//     {
//         cout << *(heapNums + i) << " ";
//     }
    
//     // size_t arrSize = 5;
//     // cout << "how many numbers do you want? ";
//     // cin >> arrSize;
//     // int numbers[arrSize];

//     // for(size_t i=0; i < arrSize; i++)
//     // {
//     //     cout << "Enter a number: " ;
//     //     cin >> numbers[i];
//     // }

//     ptr = &numbers[0];
//     // cout << *ptr << endl;
//     for(int i=0; i<5; i++)
//     {
//         cout << *ptr << " ";
//         ptr++;
//     }
//     cout << endl;

//     cout << "The sum of the "

//     // cout << numbers << endl;
//     // cout << &numbers[0] << endl;
//     // cout << &numbers[1] << endl;
//     // cout << &numbers[2] << endl;
//     // cout << &numbers[3] << endl;
//     // cout << &numbers[4] << endl;

//     delete[] heapNums; 
//     return 0;
// }

// int addNums(int numbers[], int arrSize)
// {
//     cout << sizeof(numbers) << endl;
//     int sum=0;
//     for(int i=0; i < arrSize; i++)
//     {
//         // sum += *(numb ers +i);
//         // sum = sum + *(numbers + i);
//         sum = sum +numbers[i];
//     }
//     return sum;
// }

// int main(int argc, char* argv[])
// {
    
//     printArray(numbers,arrSize);
//     cout << "counter: " << counter << endl;

//     return 0;
// }

// void printArray(int numbers[], int arrSize)
// {
//      for(int i = ; i < arrSize; i++)
//      {
//          cout << numbers[i] << " ";
//      }
//      cout << endl; 
// }