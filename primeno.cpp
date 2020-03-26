#include<iostream>
using namespace std;
int main()
{
	int n,i,m=0,flag=0;
	cout<<"enter a no. to check whether it is prime or not";
	cin>>n;
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			cout<<"no. is not prime"<<endl;
			flag=1;
			break;
		}
	}

}
if(flag==0)
{
	cout<<"no. is prime"<<endl;
	return(0);
}


