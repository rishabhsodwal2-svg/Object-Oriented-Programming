# include <iostream>
using namespace std;
class shape{
    public :
    virtual void draw(){
        cout<<"generic shape is drawing....";
    }
};
class circle :public shape{
    public:
    void draw(){
       cout<<"circle is drawing...."<<endl; 
    }
};
class rectangle :public shape{
    public:
    void draw(){
       cout<<"rectangle is drawing...."<<endl; 
    }
};
class triangle :public shape{
    public:
    void draw(){
       cout<<"triangle is drawing...."<<endl; 
    }
};
void Drawing(shape *s){
    s->draw();
}
int main(){
    // shape s;
    // circle c;
    rectangle r;
    // triangle t;
    // Drawing(&c);
    // // Drawing(&r);
    // Drawing(&t);
    shape *s = &r;  // without using the function 
    s->draw();

}