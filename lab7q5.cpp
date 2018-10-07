//include libraries
#include<iostream>
using namespace std;
//write a int function sumEN with an int parameter n to store inputted value and another int parameter to act as a counter
int sumEN(int n, int i)
{
	//if the counter variable is less than or equal to n
	if(i<=n)
	{
		//if the counter variable is even
		if(i%2==0)
		//return the value of the counter variable plus the returned value of the function called with n and the incremented (by one) value of the counter
		return i+sumEN(n,i+1);
		//else return the returned value of sum() with n and i=1 as parameter (i.e. addition of the returned value with the previous no.s doesn't take place if the no. is odd and it calls the function again for the next iteration of the recursion)
		else return sumEN(n,i+1);
	}
	//if the value of the counter is more than that of n return 0
	else return 0;
}
//write a int function sumON with an int parameter n to store inputted value and another int parameter to act as a counter
int sumON(int n, int i)
{
	//if the counter variable is less than or equal to n
	if(i<=n)
	{
		//if the counter variable is odd
		if(i%2==1)
		//return the value of the counter variable plus the returned value of the function called with n and the incremented (by one) value of the counter
		return i+sumON(n,i+1);
		//else return the returned value of sum() with n and i=1 as parameter (i.e. addition of the returned value with the previous no.s doesn't take place if the no. is even and it calls the function again for the next iteration of the recursion)
		else return sumON(n,i+1);
	}
	//if the value of the counter is more than that of n return 0
	else return 0;
}
//write the main function
int main()
{
	//declare an int variable to hold the inputted natural no. value and ask for its input
	int n;
	cout<<"Enter a natural no. - ";
	cin>>n;
	//declare two int variables to store the returned values of sumON and sumEN and call the said functions using them, using the parameters n and 1 respectively for each of them
	int e=sumEN(n,1);
	int o=sumON(n,1);
	//print the results
	cout<<endl<<"Sum of all even no.s from 1 to the inputted natural no. value - "<<e;
	cout<<endl<<"Sum of all odd no.s from 1 to the inputted natural no. value - "<<o;
	//That's All Folks!
	return 0;
}
