# include <iostream>
using namespace std;
class shape {   // here we can prevent our shape to inherit to any of the branch (with the use of final )
    public :
    virtual void draw(){  // here we can also prevent the overriding of a particular function with any another  
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
    shape s;
    circle c;
    rectangle r;
    triangle t;
    Drawing(&c);
    Drawing(&r);
    Drawing(&t);

}