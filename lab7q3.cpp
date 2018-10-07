//include the libraries
#include<iostream>
using namespace std;
//write a void function PrintEN with an int variables m and n as parameters
void PrintEN(int m,int n)
{
	//as long as m is lesser than or equal to n
	if(m<=n)
	{
		//if m is even i.e. the remainder of its divison by two is equal to 0
		if(m%2==0)
		//then print m
		cout<<m<<" ";
		//call PrintEN with the parameters m=1 and n in that order
		PrintEN(m+1,n);
	}
}
//write a void function PrintON with an int variables m and n as parameters
void PrintON(int m, int n)
{
	//as long as m is lesser than or equal to n
	if(m<=n)
	{
		//if m is odd i.e. the remainder of its division by 2 is 1		
		if(m%2==1)
		//then print m
		cout<<m<<" ";
		//call PrintON with the parameters m+1 and n in that order	
		PrintON(m+1,n);
	}
}
//write the main function
int main()
{
	//declare two int variables to store the starting and ending values of the range of natural no.s and ask for their input
	int m,n;
	cout<<"Enter the starting and ending natural no.s of the range (both natural no.s included) - ";
	cin>>m>>n;
	//call both the functions PrintEN and Print ON both with the parameters m and n (in that order)
	cout<<"Even No.s :"<<endl;
	PrintEN(m,n);
	cout<<endl<<"Odd No.s : "<<endl;
	PrintON(m,n);
	//Done!	
	return 0;
}

		
