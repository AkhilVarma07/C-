#include<iostream>


int fact(int n)
{
	int i,fact;
	if(n<0)
	{
		std::cout <<"enter positive number";
	}
	else
	{
	
	for (i=1;i<=5;i++)
	{
		fact=fact*i;
	}
}
	return fact;
}

int main()
{
	int n;
	
	std::cout <<"enter the value of n=";
	std::cin >>n;
	std::cout <<"factorial of "<<n<<"="<<fact(n);	
}
