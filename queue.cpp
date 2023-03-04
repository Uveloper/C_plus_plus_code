/*
* Implementing a queue in C++ uing an Array
* Queue operates on First In First Out (FIFO) principle
* Written by U.T. Otite
*/
#include <iostream>

using namespace std;

// member variables
int queue[100];
int size = 100;
int front = - 1;
int rear = - 1;

// insert function
void Insert() 
{
   int val;
   if ( rear == size - 1 )
        cout<<"Queue Overflow"<<endl;
   else 
   {
      if ( front == - 1 )
        front = 0;
      cout << "Insert the element in queue : " <<endl;
      cin >> val;
      rear++;
      queue[ rear ] = val;
   }
}

// delete function - delete 
void Delete() 
{
   if ( front == - 1 || front > rear ) 
   {
      cout << "Queue Underflow ";
      return ;
   } else 
   {
      cout << "Element deleted from queue is : " << queue[ front ] << endl;
      front++;
   }
}

// display function - displays the content of the queue
void Display() 
{
   if ( front == - 1)
    cout << "Queue is empty"<<endl;
   else 
   {
      cout << "Queue elements are : ";
      
      for ( int i = front; i <= rear; i++ )
        cout << queue[ i ] <<" ";
      cout << endl;
   }
}
int main() {
   int ch;
   cout<< "1) Insert element to queue" <<endl;
   cout<< "2) Delete element from queue" <<endl;
   cout<< "3) Display all the elements of queue" <<endl;
   cout<< "4) Exit" << endl;
   
   do 
   {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while( ch!=4 );
   
   return 0;
}