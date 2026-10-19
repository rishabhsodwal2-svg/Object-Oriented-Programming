# include <iostream>
using namespace std;
class chai{
    string chaiName;
    int serving;
    public:
    chai(string name,int s){
        chaiName =name;
        serving =s;
    }
    public:
    void display(){
        cout<<"the name of the chai is : "<<chaiName<<endl;
        cout<<"the serving of the chai are : "<<serving<<endl;
    }
    friend bool compare(const chai &chai1,const chai & chai2){    // we are using this friend function to asscess the private member of the chai class 
        if(chai1.serving > chai2.serving) return true;
        else return false ;
    }

};
int main(){
    chai masala("masala_Chai",9);
    chai Ginger("GingerChai",6);
    if(compare(masala,Ginger)== true) cout<<"the masala_chai has more servings";
    else cout<<"the Ginger_chai has more servings ";
}