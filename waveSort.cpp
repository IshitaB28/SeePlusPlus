#include <iostream>
using namespace std;
int main() {
    int arr[]={0,1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i+=2){
        if(i>0 && arr[i-1]>arr[i]){
            swap(arr[i], arr[i-1]);
        }
        if(i<=n-2 && arr[i+1]>arr[i]){
            swap(arr[i], arr[i+1]);
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
  return 0;
}
