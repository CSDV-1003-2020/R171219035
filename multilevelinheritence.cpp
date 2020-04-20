// C++ program to implement  
// Multilevel Inheritance 
#include <iostream> 
using namespace std; 
  
// base class 
class Vehicle  
{ 
  public: 
    Vehicle() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
class fourWheeler: public Vehicle 
{
private:
int wheels;
int doors;
int c;
public: 
    fourWheeler() 
    { 
      cout<<"Objects with 4 wheels are vehicles"<<endl; 
      
      
    } 
    class twowheeler:public fourwheeler
    {
    twowheeler()
    {
     cout<<"vehicles are 2 two wheelers as well"<<endl;
     }
    class threewheeler:public threewheeler
    {
    	cout<<"vehicles are 3 for three wheeler as well"<<endl;
    }

}; 
// sub class derived from two base classes 
class Car: public fourWheeler{ 
   public: 
     car() 
	    {
       cout<<"Car has 4 Wheels"<<endl;
	     cout<<"car has a roof top feature"<<endl;
     }
};

// main function
int main()
{
    //creating object of sub class will
    //invoke the constructor of base classes
    Car obj;
    return 0;
}
