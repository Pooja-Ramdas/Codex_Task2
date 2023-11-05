//Type Casting

#include <iostream>

using namespace std;

int main()
{
    float a=0;
    cout<<"Enter any floating point value:\n";
    cin>>a;
    int b=int(a);
    cout<<"The value of the variable after type-casting to int is: "<<b<<"\nAnd the original value was: "<<a;

}