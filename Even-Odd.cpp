#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Please Enter number: ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "This is an even number." << endl;
    }
    else // <--- دي الإضافة السحرية
    {
        cout << "This is an odd number." << endl;
    }

    return 0;
}