# include <iostream>
using namespace std;
class cricketor{
    public:
    string  name ;
    int runs;
    int avg;
    cricketor(string  n,int r,int a){
        name = n;
        runs = r;
        avg = a;
    }
    void change(cricketor *p){
        p->name = "rohit sharma";
        p->runs = 200;
        p->avg = 77.90;
    }
};
int main(){
    cricketor b("virat",0,-20);
    cricketor *a =&b;
    a->change(&b);
    cricketor *p = new cricketor("sachin ",900,99);
    cout<<p->name<<" ";
    cout<<p->runs<<" ";
    cout<<p->avg<<" "<<endl;
    cout<<a->name<<endl;
    cout<<a->runs<<endl;
    cout<<a->avg<<endl;

}