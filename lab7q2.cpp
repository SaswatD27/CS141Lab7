//include libraries
#include<iostream>
using namespace std;
//write a void function PrintN with an int parameter n to store the natural no. till which consecutive natural no.s starting from one have to be printed and a counter int variable i
void PrintN(int n,int i)
{
	//if the counter variable i is less than or equal to n, then print the value of i (which is a natural no.) then call PrintN again with the parameters n and i+1 in that order
	if(i<=n)
	{
		cout<<i<<" ";
		PrintN(n,i+1);
	}
	//if not, well take a hike and stop the execution of the function body
}
//write the main function
int main()
{
	//declare an int variable to store the inputted value of the max natural no. and ask for an input
	int n;
	cout<<"Enter a natural no. - ";
	cin>>n;
	//Call the function PrintN() with n and 1 as parameters, in that order
	PrintN(n,1);
	//Arrivederci (In a bad Italian accent) 
	return 0;
}
