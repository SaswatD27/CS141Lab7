//include the libraries
#include<iostream>
using namespace std;
//write an int function PowerN() with int parameters n and p to store the inputted values of the base and exponent and a counter variable i to keep track of the no. of recursions
int PowerN(int n,int p)
{
	//if the inputted value of the exponent variable is not zero
	if(p!=0)
	//return a value equal to n times the returned value of the function PowerN with the same base but with the value of the exponent variable being lesser than the present value of the exponent variable by 1 (using recursion here)
	return n*PowerN(n,p-1);
	//if the value of the exponent variable is zero then the returned value should be 1
	else return 1;
}
//write the main function
int main()
{
	//declare int variables to store base and exponent values and ask for their input
	int n,p;
	cout<<"Input base - ";
	cin>>n;
	cout<<"Input exponent - ";
	cin>>p;
	//calculate the power of the no. by calling the function PowerN with n and p as parameters in that order
	int pow=PowerN(n,p);
	//display the result	
	cout<<"Result - "<<pow;
	//auf wiedersehen	
	return 0;
}
	
