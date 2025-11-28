#include <iostream>
using namespace std;

//? Function Definition: defining a function named 'get_square'
//? Parameter: It receives one integer value named 'x'
int get_square(int x)
{
    //! Return Statement: Returns the result of multiplying x by itself
    return x * x;
}

int main()
{
    //! Variable Declaration: Reserve a space in memory for the user's number
    int square1;

    //* Output: Ask the user to input a number
    cout << "Please Enter Number : ";
    
    //* Input: Read the number from the user and store it in 'square1'
    cin >> square1;

    //? Function Call: Call 'get_square' and pass 'square1' as an Argument
    //? The result is stored in the variable 'result'
    int result = get_square(square1);

    //! Print the final result to the screen
    cout << "Square Calculator = " << result << endl;

    return 0; //!! End of program
}