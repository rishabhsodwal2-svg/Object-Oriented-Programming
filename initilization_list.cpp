// it is basicly the another method to initized the constructors in any class (oops)
# include <iostream>
# include <algorithm>
using namespace std;
class num
    {
    public:
    int x;
    char ch;
    num(int _x,char _ch):x(_x),ch(_ch){
        cout<<"the contr is initilized"<<endl;
    }


    void get(){
        cout<<"the integer part : "<<x<<endl;
        cout<<"the character part : "<<ch<<endl;
    }
    ~num(){
        cout<<"the distr is initilized"<<endl;
    }
    };
int main(){
    num A(2,'r') ;
    A.get();
}