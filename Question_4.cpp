//Conditions
#include <iostream>

using namespace std;

int main()
{
    int age=0;
    cout<<"Enter your age:\n";
    cin>>age;
    if(age>0 && age<12)
    {
        cout<<"This user is a child.";
    }
    else if (age>=12 && age<=18)
    {
        cout<<"This user is a teenager.";
    }
    else if (age>18 && age<=60)
    {
        cout<<"This user is an adult.";
    }
    else if (age>60 && age<120)
    {
        cout<<"This user is a senior citizen.";
    }
    else
    {
        cout<<"User input is incorrect.";
    }
}
