#include<iostream>
using namespace std;
class item
{
	int n;
	float c;
	public:
		void get_data(int a,float b);
		
		void put_data()
		{
			cout<<"no."<<n<<endl;
			cout<<"cost"<<c<<endl;
		}
};

void item ::get_data(int a,float b)
{
	n=a;
	c=b;
}

int main()
{
	item x;
	cout<<"\n object x"<<endl;
	x.get_data(100,6.4);
	x.put_data();
	item y;
	y.get_data(200,175.50);
	y.put_data();
	return(0);
}

