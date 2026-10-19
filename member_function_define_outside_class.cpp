# include <iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    student(string name,int rollno){
        this->name=name;
        this->rollno=rollno;
    }
    void display();
};
void student::display(){
    cout<<"the name of the student is : "<<name<<endl;
    cout<<"the rollno of the studen is : "<<rollno<<endl;
}
int main(){
    student s("rishabh",195);
    s.display();
}                                         