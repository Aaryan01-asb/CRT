#include <iostream>
using namespace std;

class area{
    public:

    int lenght;
    int width;

    void setArea(int l , int w)
       {

       lenght =l;
        width = w;
    }

friend void ShowArea(area a);
};
void showArea(area b){
    int area =b.lenght * b.width;
    cout<<"Area is :"<<area<<endl;

}
int main(){
area a;
a.setArea(5, 10); 
showArea(a);

}