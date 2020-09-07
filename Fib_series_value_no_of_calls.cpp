#include<iostream>
using namespace std;
int main()
{
	long long int a[200],b[200];
	int n;
	char ch;
	a[0]=1,b[0]=1;
	cout<<"The value of fib("<<0<<")"<<" is "<<b[0]<<" and "<<"Number of Recursive Fibonacci call at "<<"fib("<<0<<")"<<" is "<<a[0]<<"\n";
	a[1]=1,b[1]=1;
	cout<<"The value of fib("<<1<<")"<<" is "<<b[1]<<" and "<<"Number of Recursive Fibonacci call at "<<"fib("<<1<<")"<<" is "<<a[1]<<"\n";
	for(int i=2;i<80;i++)
	{
		a[i]=a[i-1]+a[i-2]+1;
		b[i]=b[i-1]+b[i-2];
		cout<<"The value of fib("<<i<<")"<<" is "<<b[i]<<" and "<<"Number of Recursive Fibonacci call at "<<"fib("<<i<<")"<<" is "<<a[i]<<"\n";
	}
	do{
	cout<<"\nEnter the fib(n) value to see value and number of calls: ";
	cin>>n;
	cout<<"The value of fib("<<n<<")"<<" is "<<b[n]<<" and Number of Recursive Fibonacci call at "<<n<<" is "<<a[n]<<"\n";
	cout<<"\nDO U WANT TO CONTINUE AGAIN (Y/N)?\t";
	cin>>ch;
	}while(ch=='y'||ch=='Y');
	if(ch!='y'||ch!='Y')
	{
		cout<<"\n\nCODED BY SAIPRASHANTH S,\n";
		cout<<"CSE DEPARTMENT,\n";
		cout<<"CORE MEMBER OF ROBOTICS CLUB @ SASTRA,\n";
		cout<<"SASTRA DEEMED TO BE UNIVERSITY,\n";
		cout<<"THANK YOU.";
		exit(0);
	}
}
