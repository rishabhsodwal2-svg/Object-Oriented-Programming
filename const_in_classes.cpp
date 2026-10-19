# include <iostream>
# include <algorithm>
using namespace std;
class num
    {
    public:
    mutable int x;      // this the bypass of the const keyword which allow the data types to change its value when they called 
    mutable char ch;
    num(int _x,char _ch):x(_x),ch(_ch) {
        cout<<"the contr is initilized"<<endl;
    }


    void get(){
        cout<<"the integer part : "<<x<<endl;
        cout<<"the character part : "<<ch<<endl;
    }
    int set(int x)const{     // without mubable keywords the constant will not allow the variables to change thier value 
        return this->x = x;
    }
    char set(char ch) const{
        return this->ch = ch;
    }
    ~num(){
        cout<<"the distr is initilized"<<endl;
    }
    };
int main(){
    num A(2,'r') ;
    A.set(4);
    A.set('v');
    A.get();
}