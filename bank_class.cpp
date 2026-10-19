// here a class of bank which show account no., balance ,withdraw , check balance 
# include <iostream>
# include <vector>
using namespace std;
class Bank{
    private:
    int account_no;
    int balance;
    public:
    void set_account_no(int n){
        account_no = n;
    }
    void set_balance(int n,int b){
        if(b==account_no){
            balance = n;
        }
        else{
            cout<<"you entered wrong account no . so amount is not deposited into your account "<<endl;
        }
    }
    void withdraw(int n,int c){
        if(c==account_no){
            balance=balance-n;
        }
        else{
            cout<<"you entered wrong account no so you are not able to withdraw the amount"<<endl;
        }
    }
    void display(){
        cout<<balance;
    }
};
int main(){
    Bank b;
    b.set_account_no(123);
    b.set_balance(3000,123);
    b.withdraw(2000,12);
    b.display();

}