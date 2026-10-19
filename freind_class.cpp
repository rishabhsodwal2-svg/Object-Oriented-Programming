# include <iostream>
using namespace std;
class calculator{
    int a;
    int b;
    public:
    calculator(int a,int b){
        this->a = a;
        this->b =b;
    }
    friend class sum;
    friend class mul;
    friend class div;
    friend class sub;
};
class sum{
    public:
    void print( const calculator &s){
        cout<<s.a + s.b<<endl;
        cout<<"this accessed by the friend class sum of the class calculator "<<endl;
    }
};
class mul{
    public:
    void print(const calculator &s){
        cout<<s.a*s.b<<endl;
        cout<<"this accessed by the friend class mul of the class calculator "<<endl;
    }
};
class div{
    public:
    void print(const calculator &s){
        cout<<s.a/s.b<<endl;
        cout<<"this accessed by the friend class div of the class calculator "<<endl;
    }
};
class sub{
    public:
    void print(const calculator &s){
        cout<<s.a-s.b<<endl;
        cout<<"this accessed by the friend class sub of the class calculator "<<endl;
    }
};

int main(){
    class calculator c(23,45);
    class sum s;
    s.print(c);
    class mul m;
    m.print(c);
    class div d;
    d.print(c);
    class sub su;
    su.print(c);

}