# include <iostream>
using namespace std;
int main(){
    // const with pointers : 
    // const int *a = new int (3); 
    // cout<<*a<<endl;// here the value is constant but the pointer is still variable 
    // // *a = 20;  we cant change the value of this bcg of const keyword
    // int b =20;
    // a = &b;
    // cout<<*a<<endl;   // we can change the value through the pointer 

    // const pointer : and variable value ;
    // int *const a = new int (3);
    // cout<<*a<<endl;
    // int b = 20;
    // // a = &b;  we canot change the value  of pointer ;
    // *a = 30;
    // cout<<*a<<endl;

    // const pinter as well as value 
    const  int *const a  = new int (20);
    int b  = 2;
    // a = &b; as pointer is constant
    // *a = 20; as value is also constant ;
    cout<<*a<<endl;






}