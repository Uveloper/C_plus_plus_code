/* 
* C++ Selection sort code
* Code written by U. T. Otite
*/
#include <iostream>
 
// Prototypes
void swap( int *, int * );
void displayArray( int [], int );

// constant
int const size = 6;
 
int main() {
    
    // declare and define array to be sorted
    int numbers[ size ] = { 5, 2, 3, 1, 6, 4 };
    std::cout << "Before Selection Sort:\t";
    displayArray( numbers, size );
   
    // loop through the array and sort 
    for( int i = 0; i < size; i++ ){
        int min_index = i;
        for( int j = i+1; j < size; j++ ){
            if( numbers[ j ] < numbers[ min_index ] ){
                min_index = j;
            }
        }
        swap( &numbers[ i ], &numbers[ min_index ] );
    }
   
    std::cout << "\nAfter Selection Sort:   ";
    displayArray( numbers, size );
    std::cout << std::endl;
   
    return 0;
}
 
void displayArray( int list[], int size ){
    for ( int i = 0; i < size; i++ )
        std::cout << list[ i ] << "\t";
}
 
void swap( int * a, int * b ){
    int temp = *a;
    *a = *b;
    *b = temp;
}
