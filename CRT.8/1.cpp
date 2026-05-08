#include <iostream>
using namespace std;

class ATM{

    int balance;
    public:
    ATM(int bal){
        balance = bal;
    }
    void withdraw(int amount){
        if(balance  < amount){
            cout<<"insufficient balance"<<endl;
        }else{
            balance -=amount;
            cout<<"amount Withdrawn: "<<amount<<endl;

        }
    }
    void ShowBalance(){
        cout<<"current balance: "<<balance<<endl;
    }

};
int main()
{
ATM a(5000);
a.ShowBalance();
a.withdraw(500);
a.ShowBalance();

return 0;
}   