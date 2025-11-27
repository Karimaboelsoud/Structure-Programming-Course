#include <iostream>
using namespace std;

int x=100;
int main ()

{
int x=5; 

cout<<x <<endl;  //! this if you want to print local x which have 5 value.

cout<<::x <<endl; //? this if you want to print global x which have 100 value.
    return 0;
}
