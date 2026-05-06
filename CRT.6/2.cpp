//
#include<iostream>
using namespace std;

class student {
  private:
  int regno = 101;

    public:

    string name;


    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"rollno:"<<regno<<endl;
        regno++;
    }

    
};

int main(){
    student s1;
    student s2;
    s1.name = "aaryan";
    s2.name = "aryan";
    s1.display();
    s2.display();

    return 0;
}