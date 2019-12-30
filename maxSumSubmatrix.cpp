#include <iostream>
using namespace std;
int maxSumSubmatrix(int **arr, int m, int n){
    int sum=-9999;
    //cout<<"1"<<endl;
    for(int i=m-1;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            arr[i][j]+=arr[i][j+1];
        }
    }
    //cout<<"2"<<endl;
    for(int i=m-2;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            arr[i][j]+=arr[i+1][j];
        }
    }
    //cout<<"3"<<endl;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            sum=max(sum, arr[i][j]);
    //cout<<"4";
    return sum;
}
int main() {
    int m, n, sum=0;
    cin>>m>>n;
    int ** arr=new int*[m];
    for(int i=0;i<m;i++)
        arr[i]=new int[n];
    
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    sum=maxSumSubmatrix(arr, m, n);
    cout<<"Max sum="<<sum;
    return 0;
}
