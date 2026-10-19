# include <iostream>               // this is basicly called as perfect incapsulation 
using namespace std;
class student {
    private:       // how to excess this private items with the help of another getter and setter functions 
    int age ;
    string name;           // here all the  attributes are private 
    int id;
    string gf;
    float gpa;
    public:           // private atributes can be accessed in the class not in the main function 
    student(int age ,string name,int id,string gf,float gpa){
        cout<<this->name<<"default parametrised consturctor initialised: ";
        this->age = age;
        this->name = name;
        this->id = id;
        this->gf = gf;
        this->gpa = gpa;
    }
    void sleep(){                 // all teh behaviours are public 
        cout<<"the student is sleeping ";
    }
    void studing(){
        cout<<"the student is studing ";
    }
    void chatting(){
        cout<<"the student is chatting with his gf: ";
    }
    ~student(){
        cout<<"the default student distructor: ";
    }              
};
int main(){
    student A(20,"rishabh",195,"none",9.3);
    // here we cannot excess the any attributes here; 

}