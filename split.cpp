/*
* Split a string using the stringstream, getline and a delimiter.
* 
* Written by U.T. Otite
*/

#include <iostream>
#include <string>
#include <sstream>      // std::stringstream
 
int main() {
   
    std::string data = "This is one of the best ways to split a string in c++";
    std::string temp;
    char delimiter = ' ';
    std::stringstream dat( data );
 
    while( std::getline( dat , temp, delimiter ) )
    {
        std::cout << temp << std::endl;
    }
 
    return 0;
}
 