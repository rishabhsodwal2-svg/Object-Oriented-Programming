# include <iostream>
using namespace std;
class abc {
    public:
    abc(){
        cout<<"the ctor of abc activated: "<<endl;
    }
    virtual ~ abc(){
        cout<<"the dtor of abc activated: "<<endl;
    }

};
class def :public abc{
    public:
    def(){
        cout<<"the ctor of def activated: "<<endl;
    }
    virtual ~def(){
        cout<<"the dtor of def activated: "<<endl;
    }

};
int main(){
    def B;
}