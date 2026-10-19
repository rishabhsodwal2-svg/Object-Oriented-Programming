# include <iostream>
using namespace std;
class student{
public:
    string name;
    int roll;
    void input(){
        cout<<"enter the name of the student : ";
        cin>>name;
        cout<<"enter the roll_no. of the student : ";
        cin>>roll;
    }
    void display(){
        cout<<"the name of the student is : "<<name<<endl;
        cout<<"the roll_no. of the student is : "<<roll<<endl;
    }
};
int main(){
    // int n;cout<<"enter the size of the array : ";cin>>n;
    // student *s = new student[n];
    // for(int i=0;i<n;i++){
    //     s[i].input();
    // }
    // for(int i=0;i<n;i++){
    //     s[i].display();
    // }
    // delete []s;
    // const key word with the pointer and using dynamic memory allocation 
    const int*a = new int(4);
    cout<<*a<<endl;
    int b = 20;
    a=&b;
    cout<<*a<<endl;
    int *const c = new int(2);  // constant the pointer but changable value 
    cout<<*c<<endl;
    int d = 30;
    *c=30;   // but the value is changable 
    cout<<*c<<endl;
    const int *const e = new int(19);
    cout<<*e<<endl;
    int f = 38;
    // e=&f;    // constant pointer 
    cout<<*e<<endl;
    // *e = 28;
    cout<<*e<<endl; // constant value 


    
}