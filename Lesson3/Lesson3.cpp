//============================================================================
// Name        : Lesson3_CPP.cpp
// Author      : Chernov Alexandr
// Created in  : CodeBlocks
// Description : C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int number3 = 0;
	    cout << "Enter a number ";
	    cin >> number3;
	    int i = 1;
	    int divisor = 0;
	    while (i <= number3)
	    {
	        if (number3 % i++ == 0 )
	        {
	            divisor++;
	        }

	    }
	    if (divisor == 2)
	    {
	        cout << "The number entered " << number3 << " is a prime number." << endl;
	    } else
	    {
	        cout << "The number you entered is not a prime number" << endl;
	    }
	return 0;
}
