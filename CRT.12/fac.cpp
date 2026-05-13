
#include <iostream>
using namespace std;
 
int fac(int x){
    if(x==1)
    return 0;
    return x * fac(x-1);
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<fac(n)<<endl;
    return 0;
    
}