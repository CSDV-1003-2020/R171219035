#include <iostream> 
  
class A { 
    int a; 
  
public: 
    A() { a = 0; } 
  
    // global friend function 
    friend void showA(A&); 
}; 
  
void showA(A& x) 
{ 
    // Since showA() is a friend, it can access 
    // private members of A 
    std::cout << "A::a=" << x.a; 
} 
  
int main() 
{ 
    A a; 
    showA(a); 
    return 0; 
}

