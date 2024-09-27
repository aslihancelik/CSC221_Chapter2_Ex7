// CSC221_Chapter2_Ex7.cpp : This file contains the 'main' function. This program prompts
// the user to enter the ocean level. Then calculates the rise in ocean level in 
// 5, 7, and 10 years. The assumption for the amount that ocean rise is 1.5 millimeters 
// per year. Given this constant the program, outputs the calculated values of both 
// the ocean level and the difference of current and calculated ocean level in 5,7 and 10
// years.
// 
//
//Course: CSC 221
//Programmer: Aslihan Celik
//Date: 09/26/2024
//Assignment: Chapter 2 Exercise 7 Revised


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Declaring the variables that will be used to hold the value of ocean level in 5, 7 and 10 years
    double oceanLevelIn5Years, oceanLevelIn7Years, oceanLevelIn10Years;

    //Ocean Rise per year in millimeters 
    double oceanLevelRise;
    //Ocean Level as constant variable
    const double OCEAN_LEVEL = 1000; //This is an example value.

    //Prompt the user to enter the rise in ocean level per year in millimeters
    cout << "Please enter the number of the number of millimeters the ocean level rises per year." << endl;
    //Store the value user entered in a variable
    cin >> oceanLevelRise;
    cout << "The ocean rises " << oceanLevelRise << " millimeters every year." << endl;
    cout << "The current ocean level is " << OCEAN_LEVEL << " millimeters." << endl << endl;

    //Calculate the number of millimeters higher than the current level that the ocean’s level will be in 5 years.
    oceanLevelIn5Years = OCEAN_LEVEL + (oceanLevelRise * 5);
    cout << "The ocean level will be " << oceanLevelIn5Years << " mm in 5 years." << endl;
    cout << "The ocean level will be " << oceanLevelIn5Years - OCEAN_LEVEL << " mm higher than the current level in 5 years." << endl << endl;

    //Calculate the number of millimeters higher than the current level that the ocean’s level will be in 7 years.
    oceanLevelIn7Years = OCEAN_LEVEL + (oceanLevelRise * 7);
    cout << "The ocean level will be " << oceanLevelIn7Years << " mm in 7 years." << endl;
    cout << "The ocean level will be " << oceanLevelIn7Years - OCEAN_LEVEL << " mm higher than the current level in 7 years." << endl << endl;

    // Calculate the number of millimeters higher than the current level that the ocean’s level will be in 10 years.
    oceanLevelIn10Years = OCEAN_LEVEL + (oceanLevelRise * 10);
    cout << "The ocean level will be " << oceanLevelIn10Years << " mm in 10 years." << endl;
    cout << "The ocean level will be " << oceanLevelIn10Years - OCEAN_LEVEL << " mm higher than the current level in 10 years." << endl << endl;

    return 0;
}