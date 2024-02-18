#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue<int>pt;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pt.push(x);

    }
    while(!pt.empty()){
        cout<<pt.top()<<" ";
        pt.pop();
    }
}