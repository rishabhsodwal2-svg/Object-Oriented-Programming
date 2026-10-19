# include <iostream>
using namespace std;
class A{
    int a;
    public:
    A(int a){
        this->a =a;
    }
    friend class F;
};
class B{
    int b;
    public:
    B(int b){
        this->b=b;
    }
    friend class F;
};
class F{
    public:
    void sum(const A &x ,const B &y){
        cout<<x.a + y.b<<endl;
    }
};
int main(){
    A x(12);
    B y(13);
    F f;
    f.sum(x,y);

}