#include<iostream>
#include<string>
using namespace std;


void reverse(string, string);

int main()
{
    string a, b = ""; 
    cout << "Enter the string: ";
    cin >> a;

    reverse(a, b);	
    return 0; 
}


void reverse(string a, string b)
{
    int n = a.length();
    for(int i = 0; i<n; i++)
    {
        
        b += a[n-1-i] ; 
    }
    cout << "Reversed string: " << b << endl; 
}

