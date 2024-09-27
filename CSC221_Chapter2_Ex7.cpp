// CSC221_Chapter2_Ex7.cpp : This file contains the 'main' function. This program calculates and 
// outputs both the ocean levels in 5, 7 and 10 years and the difference between current ocean 
// level and the ocean level in 5,7 and 10 years in millimeters.
// 
// 
//Course: CSC 221
//Programmer: Aslihan Celik
//Date: 09/26/2024
//Assignment: Chapter 2 Exercise 7


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Declaring the variables that will be used to hold the value of ocean level in 5, 7 and 10 years.
    double oceanLevelIn5Years, oceanLevelIn7Years, oceanLevelIn10Years;

    //Ocean Rise per year in millimeters
    const double OCEAN_RISE_PER_YEAR = 1.5;
    //Ocean Level as constant variable
    const double OCEAN_LEVEL = 1000; //This is an example value.

    //Output what the ocean level is currently.
    cout << "The current ocean level is " << OCEAN_LEVEL << " millimeters." << endl;

    //Calculate the number of millimeters higher than the current level that the ocean’s level will be in 5 years.
    oceanLevelIn5Years = OCEAN_LEVEL + (OCEAN_RISE_PER_YEAR * 5);
    cout << "The ocean level will be " << oceanLevelIn5Years << "mm in 5 years." << endl;
    cout << "The ocean level will be " << oceanLevelIn5Years - OCEAN_LEVEL << " mm higher than the current level in 5 years." << endl << endl;

    //Calculate the number of millimeters higher than the current level that the ocean’s level will be in 7 years.
    oceanLevelIn7Years = OCEAN_LEVEL + (OCEAN_RISE_PER_YEAR * 7);
    cout << "The ocean level will be " << oceanLevelIn7Years << "mm in 7 years." << endl;
    cout << "The ocean level will be " << oceanLevelIn7Years - OCEAN_LEVEL << " mm higher than the current level in 7 years." << endl << endl;

    // Calculate the number of millimeters higher than the current level that the ocean’s level will be in 10 years.
    oceanLevelIn10Years = OCEAN_LEVEL + (OCEAN_RISE_PER_YEAR * 10);
    cout << "The ocean level will be " << oceanLevelIn10Years << "mm in 10 years." << endl;
    cout << "The ocean level will be " << oceanLevelIn10Years - OCEAN_LEVEL << " mm higher than the current level in 10 years." << endl << endl;

    return 0;
}