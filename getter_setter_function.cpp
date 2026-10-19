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
        cout<<this->name<<"default parametrised consturctor initialised: "<<endl;
        this->age = age;
        this->name = name;
        this->id = id;
        this->gf = gf;
        this->gpa = gpa;
    }
    void Setgpa(float a,int b){       // seting the value with the extra function 
        if(b == 9783){     // extra level of authencation for  ensuring the security of user 
            this->gpa = a;
        }
    }
    float getgpa(){                 // geting the value with the help of extra function 
        return this->gpa;
    }
    string getname(){
        return this->name;
    }
    void sleep(){                 // all teh behaviours are public 
        cout<<"the student is sleeping "<<endl;
    }
    void studing(){
        cout<<"the student is studing "<<endl;
    }
    void chatting(){
        cout<<"the student is chatting with his gf: "<<endl;
    }
    ~student(){
        cout<<"the default student distructor: "<<endl;
    }              
};
int main(){
    student A(20,"rishabh",195,"none",9.3);
    cout<<A.getname()<<endl;
    A.Setgpa(3.4,23);
    cout<<A.getgpa()<<endl;



}