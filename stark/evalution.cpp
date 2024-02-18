#include<bits/stdc++.h>
using namespace std;
int evalution(string s){
    stack<int>st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9')
        st.push(s[i]-'0');
        else{
            int x,y;
            x=st.top();
            st.pop();
            y=st.top();
            st.pop();
            switch(s[i]){
                case '*':
                st.push(x*y);
                break;
                case '+':
                st.push(x+y);
                break;
                case '-':
                st.push(y-x);
                break;
                case '/':
                st.push(y/x);
                break;
                case '^':
                st.push(pow(y,x));
                break;
                default:
                break;

            }
        }
    }
    return st.top();
}
int main(){
    cout<<evalution("46+2/5*7+");
}