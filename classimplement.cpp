#include<iostream>
using namespace std;
class item
{
	int n;//private by default
	float c;
	public:
		void get_data(int a,float b);//prototype declartion
		//inline function
		void put_data()//function defination
		{
			cout<<"no."<<n<<"\n";
			cout<<"cost"<<c<<"\n";
		}
};
//.........member function definition......
void item ::get_data(int a,float b)
{
	n=a;
	c=b;//private variables directly used
}
//...........main prgm................
int main()
{
	item x;//creting an object
	cout<<"\n object x"<<"\n";
	x.get_data(100,6.4);
	x.put_data();
	item y;
	y.get_data(200,175.50);
	y.put_data();
	return(0);
}

