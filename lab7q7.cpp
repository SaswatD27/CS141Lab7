//include libraries
#include<iostream>
#include<math.h>
using namespace std;
//write a int function revN() with two int parameters, one to store the inputted value, another to store the length of n 
int revN(int n, int l)
{
	//if the value of n is not zero then return the remainder of the division of n by 10 plus the returned value of revN() with n/10 as the parameter
	if(l!=0)
	{
		l--; //decreasing the present value of l by 1
		return (pow(10,l)*(n%10))+revN(n/10,l);
	}
	//if the value of n is zero then return 0
	else return 0;
}
//write the main function
int main()
{	
	//declare an int variable n to store the value of the inputted no and ask for its input
	int n;
	cout<<"Enter a natural no. - ";
	cin>>n;
	//calculate the no. of digits of the no. using a for loop and use an int variable to store the resulting value and m to store the value of n for processing and m is kept on being divided in each iteratio till its value reaches 0, i.e. m has to be greater than 0, increasing l by one with each iteration
	int l=0;	
	for(int m=n;m>0;l++,m/=10);
	//call the function revN() with the n's value and zero and l as its parameters using another int variable to hold the returned value
	int r=revN(n,l);
	//display the result
	cout<<"The reverse of "<<n<<" is "<<r<<".";
	//check if the no. is a palindrome: if the no. and the reversed no. are equal then print that it's a palindrome, else answer in the negative
	if(n==r)
	cout<<endl<<"It is a palindrome";
	else cout<<endl<<"Not a palindrome";
	//Adios
	return 0;
}
