#include<iostream>
using namespace std;
class person
{
	char name[30];
	int a;
	public:
		void getdata();
		void display();
};
void person:: getdata()
{
	cout<<"enter name"<<endl;
	cin>>name;
	cout<<"enter age"<<endl;
	cin>>a;
}
int main()
{
	person p;
	p.getdata();
	p.display();
	return 0;
}

