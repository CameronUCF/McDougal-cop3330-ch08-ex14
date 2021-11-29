#include <iostream>

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Cameron McDougal
 */

 /*											Written Response 
 *		Declaring a non-reference function argument means that it ensure that the data passed into the
 *	function will not be modified in any way and will throw a compiler error if the data was attempted
 *	to be modified inside the function's body. This method also helps the compiler optimize code when
 *	compiled.
 */

int add(const int a, const int b);
void PrintArray(const int arr[], const int size);
void PrintAtIndex(const int arr[], const int index);