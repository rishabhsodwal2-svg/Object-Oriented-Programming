# include <iostream>
using namespace std;
class abc{
    public:
    static int x,y;
    static void print(){           // function ko bhi static karsak te hai jisse use koi matlab nahin hoga ki kon object use call kar rahaa hai 
        cout<<x<<" "<<y<<endl; // bo sirf abc se matlab rakhe ga and us me static variables hi pass honge matlab print honge 
    }
};
int abc::x;
int abc::y;
int main(){
    abc A;
    A.x = 45;
    A.y = 30;     // here with the help of static keyword the values are automaticaly copied to the all the objects of abc that is all 
    abc B;
    abc C;
    A.print();
    B.print();
    C.print();
    abc::print();
    abc::print();
    abc::print();


}