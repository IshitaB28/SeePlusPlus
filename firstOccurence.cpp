#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int s=0, e=n-1, mid=0, ans=-1;
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
	    //s=mid+1; in case we want the last occurence
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int main() {
    int arr[]={1,2,2,2,4,4,7,8};
    int n=sizeof(arr)/sizeof(int);
    int key, index;
    cin>>key;
    index=firstOcc(arr, n, key);
    if(index==-1)
        cout<<key<<" is not present."<<endl;
    else    cout<<key<<" is present at the index "<<index<<endl;
}
