/*
* C++ Fibonacci code
* Code written by U. T. Otite
*
* The Fibonacci Sequence is a set of numbers such that each number in the sequence is the sum of the two numbers that immediatly preceed it
*/

#include <iostream>
int fibonacci( int );

int main() {
    
    int num = 9;
    std::cout << "fibonacci of " << num << " is " << fibonacci(num);

    return 0;
}

int fibonacci( int number )
{
	if (number < 2 ) return number;
	else return (fibonacci( number - 1 ) + fibonacci( number - 2 )) ;
}