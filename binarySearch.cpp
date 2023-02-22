/* Binary Search using C++ 
* Code written by U. T. Otite- U T Otite
* Complexity Best-case performance: O(1)
* Complexity Worst-case performance: O(log n)
*/ 
#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    std::vector< int > myVector{ 1, 2, 3, 6, 8 };
    std::vector< int > searches{ 2, 6 };
    for ( auto search : searches )
    {
        std::cout << "Searching for " << search << '\n';
        if ( std::binary_search(myVector.begin(), myVector.end(), search ) )
            std::cout << "Found " << search << '\n';
        else
            std::cout << "not found!\n";
    }
}