# include<iostream>
using namespace std;
class Add{
public: 
    // sum of two int 
    int sum(int x,int y){
        cout<<"the sum of two int numbers: "<<endl;
        return x+y;
    }
    // sum of three int 
    int sum(int x,int y, int z){
        cout<<"the sum of three int numbers: "<<endl;
        return x+y+z;
    }
    // sum of two double 
    double sum(double x,double y){
        cout<<"the sum of two double numbers: "<<endl;
        return x+y;
    }
};
int main(){
    int x = 5,y = 5,z= 2;
    Add A ; 
    cout<<A.sum(x,y)<<endl;
    cout<<A.sum(x,y,z)<<endl;
    cout<<A.sum(5.2,2.)<<endl;
    
}