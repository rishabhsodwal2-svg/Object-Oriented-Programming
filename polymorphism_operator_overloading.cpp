# include <iostream>
# include <algorithm>
using namespace std;
class complex {
    public:
    int real;
    int imaginary;
    complex(int r,int i ){
        this->real = r;
        this->imaginary = i;
    }
    void print(){
        cout<<"["<<real<<"+ i"<<imaginary<<"]"<<endl;
    }

    // operator overloading for complex number addition 
    complex operator+(const complex &B){
        return complex(this->real + B.real, this->imaginary + B.imaginary);
    }
    // operator overloading for complex number subtraction ; 
    complex operator-(const complex &B){
        return complex(this->real - B.real, this->imaginary - B.imaginary);
    }

    // operator overloading for complex multiplication ;
    complex operator *(const complex &B){
        return complex((this->real*B.real)-(this->imaginary*B.imaginary),(this->real*B.imaginary)+(this->imaginary*B.real));
    }


    // operator overloading for complex equal checking ;
    bool operator==(const complex &B){
        return (this->real == B.real && this->imaginary ==B.imaginary);
    }

};
int main(){
    complex A(2,5);
    A.print();
    complex B(3,3);
    B.print();
    // complex c = A+B;
    // c.print();
    // complex D = A-B;
    // D.print();
    // complex E = A*B;
    // E.print();
    bool E = A==B;
    cout<<E;

}