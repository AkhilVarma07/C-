#include<iostream>
#include<cmath>
using namespace std;
int area(int r)
{
	int a;
	a=3.14*r*r;
	return a;
}
int main()
{
	int r;
	cout <<"enter the radius=";
	cin >>r;
	cout <<"area="<<area(r);
}
