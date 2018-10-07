//Program to generate nth Fibonacci term using recursion
//include libraries
#include<iostream>
using namespace std;
//write an int function FibonN() with four int parameters n(to hold the inputted value), x1 and x2 (to hold the values of the lesser and greater consecutive fibonacci no.s respectively) and i (a counter variable
int FibonN(int n,int x1,int x2,int i)
{
	//declare an int variable m to hold temporary values during some processes	
	int m;	
	//if i is lesser than or equal to n and n is greater than two, then increment the value of x2 by x1 and x1 takes up the previous value of x2, with the use of m to pass over the previous value of x2
	if(i<=n&&n>2)
	{
		m=x2;
		x2+=x1;
		x1=m;
		//Call FibonN() again with parameters n, x1, x2 and i+1
		FibonN(n,x1,x2,i+1);
	}
	//else if n is either 1 or 2
	else if(n==1||n==2)
	//then return 1
	return 1;
	//else if i exceeds n, return x2
	else if(i>n)
	return x2;
}
//write the main function
int main()
{
	//declare an int variable n to hold a natural no. input and ask for its input
	int n;
	cout<<"Enter a natural no. - ";
	cin>>n;
	//call the function FibonN() with n,1,1 and 3 as parameters (as the first two Fibonacci no.s are known to be 1); using an int variable to store the returned value
	int f=FibonN(n,1,1,3);
	//display the result
	cout<<"The fibonacci no. is "<<f;
	//Adios
	return 0;
}
