#include <iostream>
using namespace std;
 int sumofdigit(int x){
    if(x == 0)
    return 0;
   return (x % 10)+sumofdigit(x/10);
  
}


int main() {
    int n ;
    cout<<"Enter the value of n: ";
    cin>>n ;
    cout<<"sumofdigit"<<n<<" is:"<<endl;
    return 0;
    
}