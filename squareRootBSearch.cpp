#include <iostream>
using namespace std;
float squareRoot(int no, int p){
    int s=0, e=no-1, mid=0;
    float ans=0;
    while(s<=e){
        mid=(s+e)/2;
        if(mid*mid==no){
            ans=mid;
            break;
        }
        if(mid*mid<no){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
    }
    float inc=0.1;
    for(int i=0;i<p;i++){
        while(ans*ans<=no){
            ans+=inc;
        }
        ans-=inc;
        inc=inc/10;
    }
    return ans;
}
int main() {
    cout<<squareRoot(49,1)<<endl;
    cout<<squareRoot(10,3)<<endl;
    cout<<squareRoot(2,2)<<endl;
}
