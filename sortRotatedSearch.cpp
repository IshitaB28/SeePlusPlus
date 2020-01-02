#include <iostream>
using namespace std;
int searchRotated(int arr[], int s, int e, int key){
    if(s>e)
        return -1;
    int mid=(s+e)/2;
    if(arr[mid]==key)
        return mid;
    if(arr[s]<=arr[mid]){
        if(key>=arr[s] && key<=arr[mid]){
            return searchRotated(arr, s, mid-1, key);
        }
        else return searchRotated(arr, mid+1, e, key);
    }
    if(key>=arr[mid] && key<=arr[e])
        return searchRotated(arr, mid+1, e, key);
    else return searchRotated(arr, s, mid-1, key);
}
int main() {
    int arr[]={5,6,7,1,2,3,4};
    int key;
    cin>>key;
    cout<<"Element found at index "<<searchRotated(arr,0, 6, key)<<endl;
    return 0;
}
