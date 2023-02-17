/* 
* C++ Quick sort code
* Code written by U. T. Otite
* Quick sort partitions the array, and sort the sub arrays independently
*/

#include <iostream>
 
// prototypes
void swap( int *, int * );
void QuickSort( int [], int, int );
int Partition( int [], int, int );
void displayArray( int [], int );

// const and variables
int const size = 6;
int numbers[size] = { 7, 2, 8, 1, 6, 4 };
 
int main() {
   
    std::cout << "Before QuickSort:\t";
    displayArray(numbers, size);
    QuickSort(numbers, 0, size-1);
    std::cout << "\nAfter QuickSort:\t";
    displayArray(numbers, size);
    std::cout << std::endl;
 
    return 0;
}
 
// prints the array values
void displayArray( int list[], int size ){
    for ( int i = 0; i < size; i++ )
        std::cout << list[ i ] << "\t";
}

// performs the quick sort
void QuickSort(int list[], int low, int high){
    if( low < high ) {
        //partition the array
        int pivot = Partition( list, low, high );
       
        //sort the sub arrays independently
        QuickSort( list, low, pivot-1 );
        QuickSort( list, pivot+1, high );
    }
}
 
// partitions the array
int Partition(int list[], int low, int high){
    // set the pivot to the last value in the array list
    int pivot = numbers[ high ];
    int i = ( low-1 );
       
    for( int j = low; j <= high-1; j++ ) {
        if( list[ j ] <= pivot ){
            i++;
            swap( &list[i], &list[ j ] );
        }
    }
    swap( &list[ i+1 ], &list[ high ] );
    return ( i + 1 );
 }
 
// swaps the content of the passed in parameters
void swap( int * a, int * b ){
    int temp = *a;
    *a = *b;
    *b = temp;
}
