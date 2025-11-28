#include <iostream>
using namespace std;

int main()
{
    //? Initialize variables: a = 7 (Binary: 0111), b = 5 (Binary: 0101)
    int a = 7;
    int b = 5;

    cout << "--- Bitwise Operators ---" << endl;

    //? 1. Bitwise AND (&): Returns 1 only if BOTH bits are 1.
    //? Calculation: 0111 & 0101 = 0101 (Result: 5)
    cout << "a & b = " << (a & b) << endl;


    //! 2. Bitwise OR (|): Returns 1 if AT LEAST one bit is 1.
    //! Calculation: 0111 | 0101 = 0111 (Result: 7)
    cout << "a | b = " << (a | b) << endl;


    //* 3. Bitwise XOR (^): Returns 1 if bits are DIFFERENT.
    //* Calculation: 0111 ^ 0101 = 0010 (Result: 2)
    cout << "a ^ b = " << (a ^ b) << endl;


    //? 4. Right Shift (>>): Shifts bits to the right (Equivalent to dividing by 2).
    //? Calculation: 7 / 2 = 3 (Integer division, fractions dropped)
    cout << "a >> 1 = " << (a >> 1) << endl;


    //! 5. Left Shift (<<): Shifts bits to the left (Equivalent to multiplying by 2).
    //! Calculation: 7 * 2 = 14
    cout << "a << 1 = " << (a << 1) << endl;


    //* 6. Right Shift b (>>):
    //* Calculation: 5 / 2 = 2
    cout << "b >> 1 = " << (b >> 1) << endl;


    //? 7. Left Shift b (<<):
    //? Calculation: 5 * 2 = 10
    cout << "b << 1 = " << (b << 1) << endl;

    
    return 0;
}