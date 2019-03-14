#include <iostream>
using namespace std;

int main()
{
    int myInt=15;
    int *myPointer= &myInt;
    
    cout <<"myInt memory location: "<< &myInt<<"\nvalue of myPointer: "<< myPointer;
    cout <<"\nmyInt value: "<< myInt<<"\nvalue pointed to by myPointer: "<< *myPointer;
    
    myInt= 10;
    
    cout <<"\nafter value change"<<"\nmyInt memory location: "<< &myInt<<"\nvalue of myPointer: "<< myPointer;
    cout <<"\nmyInt value: "<< myInt<<"\nvalue pointed to by myPointer: "<< *myPointer;
}