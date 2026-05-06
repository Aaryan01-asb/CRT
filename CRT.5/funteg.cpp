#include<iostream>
using namespace std;

int coffeevol(int shots) {
    return shots * shots;

}
int main()
{
    int shots;
    cout<< "enter no. of coffee shots:";
    cin>>shots  ;
    cout<<"volume of coffee"<<coffeevol(shots)<<"ml"<<endl;
    return 0;
}