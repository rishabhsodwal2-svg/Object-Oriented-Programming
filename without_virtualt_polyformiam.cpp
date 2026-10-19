# include <iostream>
using namespace std;
class shape{   // here we will use the heep defining the objects for the creating a new object use this if you are comfurtable in creating he heep 
    public :
    void draw(){
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
    // rectangle r;
    // triangle t;
    // Drawing(&c);
    // Drawing(&r);
    // Drawing(&t);
   
}
