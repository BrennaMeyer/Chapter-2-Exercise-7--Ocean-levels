// Chapter 2 Exercise 7- Ocean levels.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Programer: Brenna Meyer
//Date: February 5th, 2025
// Requirements: Ocean Levels Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, 
// write a program that displays: The number of millimeters higher than the current level that the ocean’s level will be in 5 years.
// The number of millimeters higher than the current level that the ocean’s level will be in 7 years. 
// The number of millimeters higher than the current level that the ocean’s level will be in 10 years.

#include <iostream>
#include <iomanip>
using namespace std;
const double riseRate = 1.5; 

int main()
{
	cout << "The ocean level in 5 years will be" << riseRate * 5;
	cout << "The ocean level in 7 years will be" << riseRate * 7;
	cout << "The ocean level in 10 years will be" << riseRate * 10;
}


