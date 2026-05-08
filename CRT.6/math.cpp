#include<iostream>
using namespace std;

class area {
    public:
    int length;
    int breadth;
    int side;
    float radius;

    area(){
        length=0;
        breadth=0;
        side=0;
        radius=0;
    }
    
    area(int lenght, int breadth){
      this->length=length;
      this->breadth=breadth;  
    }
    area(int side){
        this->side=side;

    }
    area(float radius){
        this->radius=radius;

    }
    void show(){
        cout<<"area of rectangle="<<length*breadth<<endl;
        cout<<"area of square="<<side*side<<endl;
        cout<<"area of circle="<<3.14*radius*radius<<endl;

    }
};
    int main(){
        area a1;
        a1.length=12;
        a1.breadth=12;
        a1.side=10;
        a1.radius=4;
        
        a1.show();
        return 0;
    }
