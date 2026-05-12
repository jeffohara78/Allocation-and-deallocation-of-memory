// Allocation and Deallocation of memory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Jeff O'Hara
CSC275
Allocation and deallocation of memory
A program that creates 5 objects as pointers to the heap
*/

#include <iostream>

using namespace std;

int main()
{
    //create the first pointer and set to null to assign it to heap memory
    int* firstVar = NULL;
    firstVar = new int;//assign the address in heap memory using the NEW keyword
    cout << "Created a new pointer in heap memory named firstVar." << endl;//print to screen that a new pointer has been created

    *firstVar = 7;//initialize the pointer a value
    cout << "The value of firstVar is: " << *firstVar << endl;//print out to screen the value to user

    delete firstVar;//delete from heap memory the pointer in heap memory
    cout << "Heap memory has now been cleared, firstVar is no more!\n" << endl;//output a message to user to let them know heap memory is now clear
    
    //create second pointer
    double* secondVar = NULL;
    secondVar = new double;
    cout << "Created a new pointer in heap memory named secondVar." << endl;

    *secondVar = 123.45;//initiale pointer
    cout << "The value of secondVar is: " << *secondVar << endl;

    delete secondVar;//delete pointer
    cout << "Heap memory has now been cleared, secondVar is no more!\n" << endl;

    //create third pointer
    string* thirdVar = NULL;
    thirdVar = new string;
    cout << "Created a new pointer in heap memory named thirdVar." << endl;

    *thirdVar = "Jeff";//initiale pointer
    cout << "The value of thirdVar is: " << *thirdVar << endl;

    delete thirdVar;//delete pointer
    cout << "Heap memory has now been cleared, thirdVar is no more!\n" << endl;

    //create fourth pointer
    int* fourthVar = NULL;
    fourthVar = new int;
    cout << "Created a new pointer in heap memory named fourthVar." << endl;

    *fourthVar = 100;//initiale pointer
    cout << "The value of fourthVar is: " << *fourthVar << endl;

    delete fourthVar;//delete pointer
    cout << "Heap memory has now been cleared, fourthVar is no more!\n" << endl;

    //create fifth pointer
    bool* fifthVar = NULL;
    fifthVar = new bool;
    cout << "Created a new pointer in heap memory named fifthVar." << endl;

    *fifthVar = 0;//initiale pointer
    cout << "The value of fifthVar is: " << *fifthVar << endl;

    delete fifthVar;//delete pointer
    cout << "Heap memory has now been cleared, fifthVar is no more!\n" << endl;

    return 0;
}

