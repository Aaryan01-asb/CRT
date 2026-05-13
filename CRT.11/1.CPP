#include <iostream>
using namespace std;
int main()
{
    int target;
    cout<<"enter the target number: ";
    cin>>target;
    int arr[6]={2,4,5,67,7,8};
    for(int i=0;i<6;i++){
        if(arr[i]==target){
            cout<<"target found:";
             break;
            }else{
                cout<<"target not found:";
            }   
         }
         return 0;
        
}
