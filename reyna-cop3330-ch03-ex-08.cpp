/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Avery Reyna
 */

#include <iostream>
using namespace std;

int main()
{
    // initializing an int named "number"
    // prompt the user to enter the number of their choosing
    // take the user input and save it into cin
    int number;
    cout << "What is your number? ";
    cin >> number;

    // if the number's remainder after being divided by two is 0, then it is even
    if (number % 2 == 0)
    {
        printf("%d is an even number", number);
    }
    // if it is anythig other than 0, then it is odd
    else
    {
        printf("%d is an odd number", number);
    }

  return 0;

}