# include <iostream>
# include <algorithm>
using namespace std;
class student
    {
    public:
    // attributes 
    int id;
    string name;
    int age;
    int nos;
    int *gpa;
        // default constructor
    // student (){
    //     cout<<this->name<<"students default constructor "<<endl;
    // }
    // parametarised constructor
    student( int id,string name,int age ,int nos, int gpa){
        cout<<this->name<<"students default constructor "<<endl;
        this->id = id;
        this->name = name;
        this->age = age ;
        this->nos = nos;
        this->gpa = new int(gpa);

    }
    // copy constructor 
    // student(const student &A){
    //     cout<<this->name<<"the copy constructor activated: "<<endl;
    //     this->id = A.id;
    //     this->name = A.name;
    //     this->age = A.age;
    //     this->nos = A.nos;

    // }
    // behaviour/ functions /mehod
    void sleep(){
        cout<<this->name<<" the student is sleeping "<<endl;
    }
    void cry(){
        cout<<this->name<<" the student is crying "<<endl;
    }
    void bunk(){
        cout<<this->name<<" the student is bunking the class"<<endl;
    }
    ~student(){
        cout<<this->name<<" students default distructor"<<endl;
        delete(gpa);
    }
};
int main(){ 
    // student A; 
    // A.name ="rishabh";
    // A.id = 195;
    // A.age = 20;
    // A.nos = 6;
    // student A(9,"rishabh",20,6);
    // cout<<A.age<<" ";
    // cout<<A.name<<" ";
    // A.bunk();
    // A.cry();
    // student c = A;  // also student C(A);
    // // student c(A);
    // cout<<c.age<<" ";
    // cout<<c.name<<" ";
    // cout<<A.name<<" ";
    // A.bunk();
    // A.sleep();
    // dynamic memory allocation 
    student *A = new student(8,"vineet",22,6,9);
    cout<<*(A->gpa);
    cout<<A->name;
    A->bunk();
    delete A;
    return 0;
}