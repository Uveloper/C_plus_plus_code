/* 
* C++ iterator code used to traverse through a vector 
* Code written by U. T. Otite
*/

#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec_items = {1, 2, 3, 4 };
    vector<int>::iterator iter;
    
    for(iter = vec_items.begin(); iter != vec_items.end(); iter++)
    {
        cout << *iter << " ";
    }
    
    return 0;
}