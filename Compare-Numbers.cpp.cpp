
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
cout<<"Please Enter first number:";
cin>>num1;
cout<<"Please Enter second number:";
cin>>num2;

if (num1>num2)
{
    cout<<"The first number is greater";
}

else {
    cout<<"The second number is greater (or equal)" <<endl;
}
    return 0;
}