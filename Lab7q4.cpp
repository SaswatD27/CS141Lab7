//include libraries
#include<iostream>
using namespace std;
//write a int function sumN with an int parameter n to store inputted value and another int parameter to act as a counter
int sumN(int n, int i)
{
	//if the counter variable is less than or equal to n
	if(i<=n)
	//return the value of the counter variable plus the returned value of the function called with n and the incremented (by one) value of the counter
	return i+sumN(n,i+1);
	//if the value of the counter is more than that of n return 0
	else return 0;
}
//write the main function
int main()
{
	//declare an int variable to store the inputted value and ask for its input
	int n;
	cout<<"Enter a natural no. - ";
	cin>>n;
	//call the function sumN() with n and 1 as parameters using a new int variable which stores the value returned by the function
	int sum=sumN(n,1);
	//print the sum
	cout<<"SUM -"<<sum;
	//Time to get outta here
	return 0;
}
