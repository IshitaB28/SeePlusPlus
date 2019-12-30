#include<iostream>
using namespace std;
int main() {
	int n, tg=0, temp=0, initial=0, l=0, r=0, left=0;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>tg;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			if(arr[j]>arr[i]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	 for(int i=0;i<n;i++){
	 	initial=arr[i];
	 	l=i+1;
	 	r=n-1;
        left=tg-initial;
	 	while(l<r){
           // cout<<initial<<" "<<arr[l]<<" "<<arr[r]<<endl;
	 		if((arr[l]+arr[r])>left)
	 			r=r-1;
	 		else if((arr[l]+arr[r])<left)
	 			l=l+1;
	 		else{
                if(initial+arr[l]+arr[r]==tg)
	 			    cout<<initial<<", "<<arr[l]<<" and "<<arr[r]<<endl;
                l++;
                r--;
            }
	 	}
	 }
	return 0;
}
