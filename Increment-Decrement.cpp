#include <iostream>
using namespace std;

int main()
{
    int x = 10; //? Variable x does not have a static value; it updates with each passing line of code.

    cout << ++x << endl; //! Pre-increment: Increments x to 11 first, then prints it (Output: 11)

    cout << x++ << endl; //? Post-increment: Prints current value (11) first, then increments x to 12 (Output: 11)

    cout << x << endl; //* Print the final stored value of x (Output: 12)
    return 0;
}