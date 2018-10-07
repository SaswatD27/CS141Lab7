//Program to find factorial of any number using recursion
//include libraries
#include<iostream>
using namespace std;
//write an int function facN() with an int parameter n which contains the inputted value
int facN(int n)
{
	//if n is not equal to zero, return n times the returned value of facN() with the parameter n-1
	if(n!=0)
	return n*facN(n-1);
	//if n is equal to zero, then return 1 (which is equal to 1 factorial)
	else return 1;
}
//write the main function
int main()
{
	//declare an int variable n to hold the value of the inputted natural no. and ask for its input
	int n;
	cout<<"Enter a natural no. - ";
	cin>>n;
	//call the function facN() with the value of n as its parameter using an int variable which will store the returned value
	int f=facN(n);
	//display the result
	cout<<" The factorial of "<<n<<" = "<<f;
	//Ciao
	return 0;
}
