#include <iostream> // in the hybrid inheritance without "virtual" keyword the reference to 'x' is ambiguous
using namespace std;
class A{
    public:
    int x=10;
    void display(){
        cout<<"the value of the x is "<<x;
    }
};
class B:virtual public A{ // virtual is used to create only one copy of the grandparent class 
    public:

};
class C:virtual public A{ //  virtual is used to create only one copy ot the grandparent class 
    public:

};
class D:public B,public C{
    public:
    int p;
    void set(){
        p=x;
    }
    void display(){
        cout<<"the value of the X is : "<<x<<endl;
    }
};
int main(){
    D d;
    d.display();
    
    
}