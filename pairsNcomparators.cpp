#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool myCompare(pair<string, int> p1, pair<string, int> p2){
    if(p1.second==p2.second)
        return p1.first<p2.first;
    return p1.second>p2.second;
}
int main() {
    int min_sal, n;
    pair<string, int> emp[100005];
    string name;
    int salary;
    cin>>min_sal>>n;
    for(int i=0;i<n;i++){
        cin>>name;
        cin>>salary;
        emp[i].first=name;
        emp[i].second=salary;
    }
    sort(emp, emp+n, myCompare);
    for(int i=0; i<n; i++){
        if(emp[i].second>=min_sal)
            cout<<emp[i].first<<" "<<emp[i].second<<endl;
    }
}
