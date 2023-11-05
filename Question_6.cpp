//Prime Numbers using loops
#include <iostream>

using namespace std;

int main()
{
    int counter_for_prime=0;
    int counter_for_five=0;
    int i=0;
    cout<<"The first five prime numbers are: \n";
    for (i = 0; i < 100; i++)
    {
        counter_for_prime=0;
        for (int j = 1; j <= i; j++)
        {
            if(i%j==0)
            {
                counter_for_prime+=1;
            }
           
        }
        if(counter_for_prime==2)
        {
            cout<<i<<" ";
            counter_for_five+=1;
        }
        if(counter_for_five==5)
        {
            break;
        }
    }
    
}