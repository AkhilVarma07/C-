#include<iostream>
using namespace std;

void prime(int);

int main()
{
    int n;
    cout <<"enter a number=";
    cin >>n;
    prime(n); 
    return 0;
}

void prime(int n)
{
    int i, count = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << "prime number";
    }
    else
    {
        cout << "not a prime number";
    }
}

