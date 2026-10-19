# include <iostream>
using namespace std;
class vehicle{
    public : 
    string name ;
    int model;
    int no_oftyre;
    vehicle(string _name ,int _model, int _no_oftyre){
        cout<<"the vehicle constructor has initilized  "<<endl;
        this->name = _name;
        this->model = _model;
        this->no_oftyre = _no_oftyre;
    }
    void start_engine(){
        cout<<"engine has started"<<endl;
    }
    void stop_engine(){
        cout<<"engine has stoped"<<endl;
    }
    ~vehicle(){
        cout<<"the vehicle distructor is activeted"<<endl;
    }
};
class car : public vehicle {
    public:
    int no_ofdoor;
    string transimission;

    car(string _name ,int _model, int _no_oftyre,int no_ofdoor,string transimission):vehicle(_name , _model, _no_oftyre){
        cout<<"the constr of car has initilized  "<<name<<endl;
        this->name = _name;
        this->model = _model;
        this->no_oftyre = _no_oftyre;
        this->no_ofdoor = no_ofdoor;
        this->transimission = transimission;
    }
    void AC_ON(){
        cout<<"the ac is now on "<<endl;
    }
    ~car(){
        cout<<"the car distructor is activeted";
    }
};
class Motorcycle:public vehicle {
protected:
    string  handlebarstyle;
    string suspensiontype;
public:
    Motorcycle(string _name ,int _model, int _no_oftyre,string  handlebarstyle,string suspensiontype):vehicle( _name , _model, _no_oftyre){
        cout<<"the motorcycle constructor is activeted"<<endl;
        this->name = _name;
        this->model = _model;
        this->no_oftyre = _no_oftyre;
        this->handlebarstyle = handlebarstyle;
        this->suspensiontype = suspensiontype;

    }
    void wheelie(){
        cout<<"motorcycle is doing wheelie"<<endl;
    }
    ~Motorcycle(){
        cout<<"the motorcycle distructor is activeted: "<<endl;
    }

};
int main(){
    // car A("sierra",233,4,4,"manual");
    // A.start_engine();
    // cout<<"the name of the car is : "<<A.name<<endl;
    // cout<<"the model of the car is : "<<A.model<<endl;
    // A.AC_ON();
    // A.stop_engine();
    Motorcycle C("BMW",200,2,"U","hard");
    C.start_engine();
    cout<<"the name of the motorcycle is : "<<C.name<<endl;
    cout<<"the model of the motorcycle is : "<<C.model<<endl;
    C.wheelie();



}