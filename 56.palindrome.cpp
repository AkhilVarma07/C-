#include<iostream>
#include<string>
#include<cstring>
using namespace std;

string reverseString(string a) 
{
    string reversed = "";
    for(int i = a.length() - 1; i >= 0; i--)
	 {
        reversed += a[i];
    }
    return reversed;
}

int main()
 {
    string a;
    cout << "Enter the string: ";
    cin >> a;
    string reversed = reverseString(a);
    if(a == reversed)
	 {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }
    return 0;
}

