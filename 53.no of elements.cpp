#include <iostream>
#include <cstring>
using namespace std;
void count(string a)
{
	int i,j=0;
	for(i=0;a[i]!='\0';i++)
	{
		j++;
	}
	cout <<"no of elements="<<j;
}
int main()
{
	string a="ganesh";
	count(a);
}
