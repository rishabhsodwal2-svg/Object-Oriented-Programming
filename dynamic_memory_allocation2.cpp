#include<iostream>
using namespace std;
class student{
    public:
    string name;
    float *gpa;
    void set_gpa(float a){
        this->gpa = new float(a);
    }
    void set_name(string s){
        this->name = s;
    }
    void display(){
        cout<<"the gpa of the student "<<name<<" is "<<*gpa;
        cout<<"  here the code is ended ";
    }

};
int main(){
    student st;
    st.set_gpa(8.0);
    st.set_name("vinod");

    student *s = &st;
    s->display();
    delete s;
}