# include <iostream>
using namespace std;
class Abstraction_example{          
    private:              // here the details the hide form the outer world 
    int num;
    char ch;
    public :
    void SetMyvalue(int n,char ch){
        this->num = n;         // here we are accessing the value using public function 
        this->ch = ch;
    }
    void GetMyvalue(){
        cout<<num<<endl;
        cout<<ch<<endl;
    }
};
int main(){
    Abstraction_example A;
    A.SetMyvalue(24,'r');
    A.GetMyvalue();
}