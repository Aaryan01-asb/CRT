#include<iostream>
using namespace std;

class cricketers {
    
    string name;
    int runs;

    public:
    cricketers(string name,int r){
        this->name= name;
        runs =r;
        

    }

    cricketers(const cricketers &c){
        this->name=name;
        this->runs=runs;

    }
    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"runs:"<<runs<<endl;
       

    
    }

    
};

int main(){
   cricketers c1("virat",12000);
   c1.show();
   cricketers c2(c1);
   c2.show();
   
    //display();
    

    return 0;

    }