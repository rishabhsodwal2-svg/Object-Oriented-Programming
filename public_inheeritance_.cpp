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

};
int main(){
    car A("sierra",233,4,4,"manual");
    A.start_engine();
    cout<<"the name of the car is : "<<A.name<<endl;
    cout<<"the model of the car is : "<<A.model<<endl;
    A.AC_ON();
    A.stop_engine();
    // vehicle *B = new car();

}