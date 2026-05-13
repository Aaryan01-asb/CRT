#include<iostream>
using namespace std;

class Employee{
    static int reg_no;
    public:

    static void show(){
        cout<<"reg_no of employee:"<<reg_no<<endl;
        reg_no++;
    }
};
int Employee::reg_no = 100;

int main(){
    Employee e1;
    Employee e2;
    Employee::show();

    return 0;
}