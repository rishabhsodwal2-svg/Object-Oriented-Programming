# include <iostream>
# include <algorithm>
using namespace std;
class A{
    private:
    int x;
    public:
    A(int _x):x(_x){};
    int get() const  {
        return x;
    }
    void set(int a){
        x=a;
    }
    friend class B;   // this friend keyword help the class B to copy the content of class A attrubutes (variable x);
};
class B{
    public :
    void print( const A &a){
        cout<<a.x<<endl;
    }

};
int main(){
    A a(2);
    a.set(7);
    cout<<a.get();
    B C;
    C.print(a);


}