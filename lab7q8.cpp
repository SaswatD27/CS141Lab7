//include libraries
#include<iostream>
using namespace std;
//write an int function sumD() with two int parameters that store the inputted no. (n) and the no. (l) of its digits
int sumD(int n, int l)
{
	//if l is greater than 0 then proceed
	if(l>0)
	//return the value of the remainder of the division of n with 10 added with the returned value of the function sumD called with n/10 and l-1 as parameters
	return n%10+sumD(n/10,l-1);
	//if l is zero, return 0
	else return 0;
}
//write the main function
int main()
{
	//declare an int variable to store a whole no. value and ask for its input
	int n;
	cout<<"Enter a whole no. - ";
	cin>>n;
	//declare an int variable to hold the value of the no. of digits of the inputted no. and find out the said no. of digits using a for loop, with the counter variable initialised as zero, and declare an int variable to store the value of the inputted no. to be used in the for loop
	int l=0;
	//run the for loop for as long as the value of the variable storing the duplicate value of the inputted no. is greater than zero
	for(int m=n;m>0;m/=10,l++);
	//call the function sumD with the inputted no. and the no. of digits as the parameters using an int variable which will store the returned value
	int sd=sumD(n,l);
	//note if the inputted value is zero, then acc to the above code, the value of the variable containing the no. of digits will be zero, and putting that value as a parameter of the function will yield the value zero, which is indeed the sum of digits of the no. zero
	//print the result
	cout<<"The sum of the digits of the no. "<<n<<" is "<<sd;
	//Au revoir
	return 0;
} 
