// Algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "QuickSort.h"
#include "Util.h"
#include "BinarySearch.h"

int main()
{
    int array[] = { 10, 11, 2, 100, 101, 30, 1234 };
    int sizeOfArray = sizeof(array) / sizeof(array[0]);


    printIntArray(array, sizeOfArray);

    quickSort(array, 0, sizeOfArray-1);

    printIntArray(array, sizeOfArray);

    int findIndex = binarySearch(array, 0, sizeOfArray - 1, 1234);

    std::cout << findIndex << "\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
