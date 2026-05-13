#include <iostream>
using namespace std;
int binary_search(int num[], int n, int target)
{
    int left =0;
    int right = n-1;
    while(left<=right){
        int mid= left+(left-right)/2;
        if(num[mid]==target){
            return mid;
        }
          else if(num[mid]<target){
            left=mid+1;
          }
          if(num[mid]>target){
            right=mid-1;
        
         }
         return -1;    
    } 
}
    int main(){
        int arr[]= {2,34,56,7,47};
        int size= sizeof(arr)/sizeof(arr[0]);
        int target;
      cout << "Enter target: ";
      cin >> target;

      int result = binary_search(arr, size, target);

        if(result != -1) {
        cout << "Element found at index: " << result;
       }else {
        cout << "Element not found";
    }

    return 0;
}
        

