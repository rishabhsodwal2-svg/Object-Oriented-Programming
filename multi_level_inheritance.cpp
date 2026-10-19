#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    void set_student_details(){
        cout<<"enter the name of the student";
        cin>>name;
        cout<<"enter the rollno. of the student";
        cin>>roll;
    }
    void display(){
        cout<<"the name of the student is "<<name<<endl;
        cout<<"the roll of the student is "<<roll<<endl;
    }
};
class marks{
    public:
    int maths;
    int chem;
    int phy;
    float percent;
    void set_marks(){
        cout<<"enter the marks of the mathematics :  ";
        cin>>maths;
        cout<<"enter the marks of the chemistry :   ";
        cin>>chem;
        cout<<"enter the marks of the physics   :   ";
        cin>>phy;
    }
    void calculate_percent(){
        percent=(maths+chem+phy)/3;
    }

};
class result :public student,public marks{
    public:
    int pass;
    int fail=-1;
    void result_student(){
        if(percent>=34 && percent <=70 ){
            pass =3;
        }
        else if(percent>=70 && percent <=90 ){
            pass  =2;
        }
        else if(percent>=90 && percent <=100 ){
            pass  =1;
        }
        else {
            fail=0;
        }
    }
    void calculate_grade(){
        if(pass==3){
            cout<<"HERE ,YOUR COMPLETE REPORT";
            cout<<"the name of the student is : "<<name<<endl;
            cout<<"the roll no. of the student is : "<<roll<<endl;
            cout<<"the marks in maths: "<<maths<<endl;
            cout<<"the marks in chemistry :"<<chem<<endl;
            cout<<"the marks in physics  :"<<phy<<endl;
            cout<<"the grade is : 3rd division"<<"with "<<percent<<"%";
        }
        else if(pass==2){
            cout<<"HERE ,YOUR COMPLETE REPORT";
            cout<<"the name of the student is : "<<name<<endl;
            cout<<"the roll no. of the student is : "<<roll<<endl;
            cout<<"the marks in maths: "<<maths<<endl;
            cout<<"the marks in chemistry :"<<chem<<endl;
            cout<<"the marks in physics  :"<<phy<<endl;
            cout<<"the grade is : 2nd division(good)"<<"with "<<percent<<"%";
        }
        else if(pass==1){
            cout<<"HERE ,YOUR COMPLETE REPORT";
            cout<<"the name of the student is : "<<name<<endl;
            cout<<"the roll no. of the student is : "<<roll<<endl;
            cout<<"the marks in maths: "<<maths<<endl;
            cout<<"the marks in chemistry :"<<chem<<endl;
            cout<<"the marks in physics  :"<<phy<<endl;
            cout<<"the grade is : 1at division(excellent)"<<"with "<<percent<<"%";

        }
        else {
            cout<<"HERE ,YOUR COMPLETE REPORT";
            cout<<"the name of the student is : "<<name<<endl;
            cout<<"the roll no. of the student is : "<<roll<<endl;
            cout<<"the marks in maths: "<<maths<<endl;
            cout<<"the marks in chemistry :"<<chem<<endl;
            cout<<"the marks in physics  :"<<phy<<endl;
            cout<<"the grade is : FAIL !"<<"with "<<percent<<"%";
        }
    }

};
int main(){
    result r;
    r.set_student_details();
    r.set_marks();
    r.calculate_percent();
    r.result_student();
    r.calculate_grade();
    
}