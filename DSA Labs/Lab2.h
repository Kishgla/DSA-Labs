/*
File:			Lab2.h
Author(s):
	Base:		Justin Tackett
				jtackett@fullsail.com
	Student:

Created:		11.30.2020
Last Modified:	11.30.2020
Purpose:		Usage of the std::vector class
Notes:			Property of Full Sail University
*/

// Header protection

#pragma once

/***********/
/* Defines */
/***********/

/*
How to use:

	When working on a lab, turn that lab's #define from 0 to 1

		Example:	#define LAB_1	1

	When working on an individual unit test, turn that #define from 0 to 1

		Example:	#define DYNARRAY_DEFAULT_CTOR	1

NOTE: If the unit test is not on, that code will not be compiled!
*/

// Main toggle
#define LAB_2	0

// Individual unit test toggles
#define LAB2_PALINDROME_NUMBER		0
#define LAB2_FILL_FILE				0
#define LAB2_FILL_ARRAY				0
#define LAB2_CLEAR					0
#define LAB2_SORT_ASCENDING			0
#define LAB2_SORT_DESCENDING		0
#define LAB2_BRACKETS				0
#define LAB2_CONTAINS_TRUE			0
#define LAB2_CONTAINS_FALSE			0
#define LAB2_MOVE_PALINDROMES		0

/************/
/* Includes */
/************/
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iostream>

// Checks to see if a number is a palindrome (reads the same forwards and backwards)
//		An example of a palindrome word would be "racecar"
//
// In: _num			The number to check
//
// Return: True, if the number is a palindrome number
inline bool IsPalindromeNumber(unsigned int _num) {
	// TODO: Implement this function	
	
}

class DSA_Lab2
{
	friend class UnitTests_Lab2;	// Giving access to test code

private:

	std::vector<int> mValues;		// contains all of the values
	std::vector<int> mPalindromes;	// contains just the numbers that are palindromes (only used in MovePalindromes method)

public:

	// Fill out the mValues vector with the contents of the binary file
	//		First four bytes of the file are the number of ints in the file
	//
	// In:	_input		Name of the file to open
	void Fill(const char* _input) {
		// TODO: Implement this method

	}

	// Fill out the mValues vector with the contents of an array
	//
	// In:	_arr			The array of values
	//		_size			The number of elements in the array
	void Fill(const int* _arr, size_t _size) {
		// TODO: Implement this method

	}

	// Remove all elements from vector and decrease capacity to 0
	void Clear() {
		// TODO: Implement this method

	}

	// Sort the vector 
	//
	// In:	_ascending		To sort in ascending order or not
	//
	// NOTE: Use the std::sort method in this implementation
	void Sort(bool _ascending) {
		// TODO: Implement this method

	}

	// Get an individual element from the mValues vector
	int operator[](int _index) {
		// TODO: Implement this method

	}

	// Determine if a value is present in the vector
	// 
	// In:	_val		The value to find
	//
	// Return: True, if the value is present
	bool Contains(int _val) const {
		// TODO: Implement this method

	}

	// Move all palindrome numbers from mValues vector to mPalindromes vector
	//
	// Pseudocode:
	//		iterate through the main values vector
	//			if the value is a palindrome
	//				add it to the palindrome vector
	//				remove it from the values vector
	void MovePalindromes() {	
		// TODO: Implement this method

	}
};

