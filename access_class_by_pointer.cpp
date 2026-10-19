# include <iostream>
using namespace std;
class pointer{
    int x ;
    float y;
    public:
    pointer (int m,float d){
        x = m;
        y = d;
    }
    void get(){
        cout<<x<<" "<<y<<" ";
    }
    int set(int _x,int _y){
        return x = _x ,y= _y;   
    }
    // pointer operator *(pointer &B){
    //     return pointer(this->x*B.x,this->y*B.y);
    // }
    // bool  operator ==(pointer &B){
    //     return (this->x ==B.x && this->y== B.y);
    // }

};
int main(){
    pointer *p = new pointer(2,2.00);
    p->get();  
}