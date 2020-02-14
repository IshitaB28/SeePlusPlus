#include <iostream>
#include<algorithm>
using namespace std;
int lis(int arr[100], int n){
    int dp[100];
    int current=0;
    fill(dp, dp+n+1, 1);
    int best=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<=arr[i]){
                current=1+dp[j];
                dp[i]=max(dp[i], current);
            }
        }
        best=max(best, dp[i]);
    }
    return best;
}
int main() {
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans=lis(arr, n);
    cout<<"The length is: "<<ans;
}
