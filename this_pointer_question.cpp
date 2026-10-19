# include <iostream>
using namespace std;
class persons{
    public:
    int age1;
    int age2;
    string name1;
    string name2;
    persons(){
        cout<<"the constructor is created for this class "<<endl;
    }
    void input(){
        cout<<"enter the name of 1st person: "<<endl;
        cin>>this->name1;
        cout<<"enter the age of 1st person: "<<endl;
        cin>>this->age1;
        cout<<"enter the name of 2nd person: "<<endl;
        cin>>this->name2;
        cout<<"enter the age of 2nd person: "<<endl;
        cin>>this->age2;
    }
    string older(){
        if(this->age1 > this->age2){
            return this->name1;
        }
        else return this->name2;
    }
};
int main(){
    persons p;
    p.input();
    cout<<p.older()<<" is older ";
}