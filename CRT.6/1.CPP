//
#include<iostream>
using namespace std;

class student {
   public:
    string name;
    string rollno;

    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"rollno:"<<rollno<<endl;
    }

    
};

int main(){
    student s1;
    s1.name = "aaryan";
    s1.rollno = "18";
    s1.display();

    return 0;
}