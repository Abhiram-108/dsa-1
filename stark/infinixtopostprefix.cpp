#include<bits/stdc++.h>
using namespace std;
int precedence(char x){
    if(x=='^')
    return 3;
    if(x=='*' || x=='/')
    return 2;
    if(x=='+' ||x=='-')
    return +1;
    else
    return -1;
}
string infinxtopostfix(string s){
    reverse(s.begin(),s.end());
    string res;
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(')
        st.push(s[i]);
        else if(s[i]>='a' && s[i]<='z'){
            res+=s[i];
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(st.top()=='('){
                st.pop();
            }
        }
        else{
            while(!st.empty() && precedence(st.top())>precedence(s[i])){
                res+=st.top();
                st.pop();

            }
            st.push(s[i]);
        }

    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}
int main(){
    string s="(a+b)";
    string k=infinxtopostfix(s);
    reverse(k.begin(),k.end());
    cout<<k<<endl;

}