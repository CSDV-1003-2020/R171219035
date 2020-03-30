#include<iostream>
using namespace std;
int main()
{
	int i,f=1,n;
	cout<<"enter ano.";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<"factorial of no."<<n<<"is"<<f<<endl;
	return(0);
}

