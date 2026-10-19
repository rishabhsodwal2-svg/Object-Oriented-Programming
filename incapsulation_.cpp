# include <iostream>
using namespace std;
class student {
    public : 
    int age ;
    string name;
    int id;
    student(int age ,string name,int id){
        cout<<this->name<<"default parametrised consturctor initialised: ";
        this->age = age;
        this->name = name;
        this->id = id;
    }
    void sleep(){
        cout<<"the student is sleeping ";
    }
    ~student(){
        cout<<"the default student distructor: ";
    }
    private:              // how to excess this private items with the help of another getter and setter functions 
    string gf;
    float gpa;
    void chatting(){
        cout<<"the student is chatting with his gf: ";
    }
};
int main(){
    student A(20,"rishabh",195);
    cout<<A.age<<endl;
    cout<<A.name<<endl;
    A.sleep();

}