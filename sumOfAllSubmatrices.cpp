#include <iostream>
using namespace std;
int sumOfMatrix(int **arr, int m, int n){
    int sum=0, tl, br;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            tl=(i+1)*(j+1);
            br=(m-i)*(n-j);
            sum+=arr[i][j]*tl*br;
        }
    }
    return sum;
}

int main(int argc, char const *argv) {
    int m,n,sum=0;
    cin>>m>>n;
    int **arr=new int*[m];
    for(int i=0;i<m;i++){
        arr[i]=new int[n];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    sum=sumOfMatrix(arr, m, n);
    cout<<"Sum="<<sum;
}
