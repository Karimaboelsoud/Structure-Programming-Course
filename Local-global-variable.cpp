#include <iostream>
using namespace std;

int x=100; //* this is global x, because it is above "main functuion".
int main ()

{
int x=5; //* this is local x, because it is Inside "main functuion" and above "return 0".


cout<<x <<endl;  //! this if you want to print local x which have 5 value.

cout<<::x <<endl; //? this if you want to print global x which have 100 value.
    return 0;
}

