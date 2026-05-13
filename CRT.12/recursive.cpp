#include <iostream>
using namespace std;

void number(int n) {
    if (n > 10) 
    return;  
    cout << n << endl;    
    number(n + 1);  
}

int main() {
    number(1); 
        return 0;
}
