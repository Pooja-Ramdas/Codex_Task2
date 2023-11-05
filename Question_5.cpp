//Password using loops
#include <iostream>

using namespace std;

int main()
{
    string password="LanaDelRay";
    string input="";
    cout<<"Enter your password:\n";
    cin>>input;
    while(true)
    {
        if(password==input)
        {
            cout<<"Your password is CORRECT.";
            break;
        }
        else
        {
            cout<<"Your password is INCORRECT. Please try again:\n";
            cin>>input;
        }
    }
}