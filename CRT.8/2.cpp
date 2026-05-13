#include <iostream>
using namespace std;

class ATM
{
private:
    int balance;
    public:

   void setBalance(int balance)
   {
     this->balance = balance;
   
    }
    void withdraw(int amount)
    {
        if(balance  < amount){
            cout<<"insufficient balance"<<endl;
        }else{
            balance -= amount;
            cout<<"amount Withdrawn: "<<amount<<endl;

        }
    }
int getBalance(){
    return balance;
}
    

};
int main()
{
    int n;
    cin >> n;
    ATM a;

a.setBalance(n);
cout<<"Balance is:"<<a.getBalance()<<endl;
a.withdraw(500);
cout<<"Balance is :"<<a.getBalance()<<endl;

return 0;
}   