//
#include<iostream>
using namespace std;

class cricketers {
    private:
    string name;
    int runs;
    double avg;

    cricketers(string n,int r,double avg){
        name= n;
        runs =r;
        this->avg= avg;

    }
    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"runs:"<<runs<<endl;
        cout<<"avg:"<<avg<<endl;

    
    }

    
};

int main(){
   
   
    //display();
    

    return 0;

    }