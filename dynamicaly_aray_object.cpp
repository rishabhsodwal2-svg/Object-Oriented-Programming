#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    string fav_sub;
    void set_name(){
        string s;
        cout<<"enter the name : "<<endl;
        cin>>s;
        name = s;
    }
    void set_rollno(){
        int n;
        cout<<"enter the roll no : "<<endl;
        cin>>n;
        rollno = n;
    }
    void display(){
        cout<<"the name is : "<<name<<endl;
        cout<<"the rollno if : "<<rollno<<endl;
    }
};
int main(){
    int n ;
    cout<<"enter the size of array : ";cin>>n;
    student *s = new student[n];
    for(int i=0;i<n;i++){
        s[i].set_name();
        s[i].set_rollno();
    }
    for(int i=0;i<n;i++){
        s[i].display();
    }
    cout<<"thanks code is sucessfully exicuted ";
    delete s; // for release the memory sucessfull 

}