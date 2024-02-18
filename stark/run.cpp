#include<iostream>
using namespace std;
template<class X> 
void swa(X &x, X &y){
     X temp = x;
     x = y;
     y = temp;
}
template <class S>
S ma(S x, S y){
        return x>y? x:y;
}
void test(int m, int n, float a, float b){
    cout<<"\nm and n before swap: "<<m<<" & "<<n;
    swa(m, n);
    cout<<"\nm and n after swap: "<<m<<" & "<<n;
    cout<<"\nMaximum between m and n: "<<ma(m, n);
    cout<<"\na and b before swap: "<<a<<" & "<<b;
    swa(a, b);
    cout<<"\na and b after swap: "<<a<<" & "<<b;
    cout<<"\nMaximum between a and b: "<<ma(a, b);
}
int main(){
    test(5, 6, 11.25, 13.75);
    return 0;
}