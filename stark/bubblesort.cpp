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
	    // if(n==2|| n==1)
	    // return -1;
	    
	    int x=n/2;
	    for(int i=1;i<=n;i++){
	        a[i]=i;
	    }int b[n];
	    int j=1;
	    for(int i=n-x+1;i<=n;i++){
	        b[j]=a[i];
			j++;
	    }
	    for(int i=1;i<=x+1;i++){
	        b[j]=a[i];
	        j++;
	    }
	    for(int i=1;i<=n;i++){
	        cout<<b[i]<<" ";
	    }
	}
	return 0;
}
