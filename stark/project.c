#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    if(a==2|| a==1)
	    return -1;
	    else
	    int x=n/2;
	    for(int i=1;i<=n;i++){
	        a[i]=i;
	    }int b[n];
	    int j=0;
	    for(int i=n-x;i<=n;i++){
	        b[j]=a[i];j++;
	    }
	    for(int i=0;i<x;i++){
	        b[j]=a[i];
	        j++;
	    }
	    for(int i=1;i<=n;i++){
	        cout<<b[i]<<" ";
	    }
	}
	return 0;
}
