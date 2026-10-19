# include <iostream>
using namespace std;
class student{
    public:
    int age;
    int marks;
    string name;
    void input(){
        cout<<"enter the name of the student ";
        cin>>name;
        cout<<"enter the age of the student";
        cin>>age;
        cout<<"enter the marks of the student";
        cin>>marks;
    }
    void display(){
        cout<<"NAME :"<<name<<endl;
        cout<<"AGE : "<<age<<endl;
        cout<<"MARKS : "<<marks<<endl;
    }
};
int main(){
    student s[2];
    for(int i=0;i<2;i++){
        cout<<"enter the details of the student no."<<i+1<<endl;
        s[i].input();
    }
    for(int i=0;i<2;i++){
        cout<<"the details of the student no. "<<i+1<<endl;
        s[i].display();
    }
    
    
}