# include <iostream>  // this is the inheritance of the child class car from parent class vehicle
using namespace std;
class vehicle{
    public:
    string name;
    int model;
    int nooftyre;
    vehicle(string s,int m,int nf){
        name = s;
        model = m;
        nooftyre = nf;
    }
    void start_eng(){
        cout<<"the engine of "<<name<<"is started "<<endl;
    }
    void stop_engine(){
        cout<<"the engine of "<<name<<"is stoped !"<<endl;
    }
};
class car:public vehicle{
    public:
    int no_of_door;
    string trans;
    public:
    car(int no_of_door,string trans,string s,int m,int nf):vehicle(s,m,nf){
        this->trans = trans;
        this->no_of_door = no_of_door;
        name=s;
        model=m;
        nooftyre=nf;
    }
    void start_ac(){
        cout<<"the ac of the car is on "<<endl;
    }
    void open_door(){
        cout<<"the door are open now "<<endl;
    }
    void display(){
        cout<<"name of the car is : "<<name<<endl;
        cout<<"no. of the doors of car : "<<no_of_door<<endl;
        cout<<"transition type of car is : "<<trans<<endl;
        cout<<"model of the car is : "<<model<<endl;
    }
};
int main(){
    vehicle v("mahindra",200,4);
    car c(2,"manual","mahindra",200,4);
    c.start_eng();
    c.start_ac();
    c.open_door();
    cout<<"the details of the car is : "<<endl;
    c.display();
    c.stop_engine();
    
}