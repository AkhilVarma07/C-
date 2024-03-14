#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the integer=";
	cin >> n;
	if ((n&1)==0)
	{
		cout <<"even number";
	}
	else
	{
		cout <<"odd number";
	}
}
