//Even numbers using loops and the continue statement
#include <iostream>

using namespace std;

int main()
{

    for (int i = 0; i <= 20; i++)
    {
        if(i==10)
        {
            continue;
        }
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
    
}