#include<bits/stdc++.h>
using namespace std;
int precedence(char x){
    if(x=='^')
    return 3;
    else if(x=='/'||x=='*')
    return 2;
    else if(x=='+'||x=='-')
    return 1;
    else
    return -1;

}
string infinxtopostprefix(string s){
    string res;
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty())
            st.pop();

        }
        else{
            while(!st.empty() && precedence(st.top())>precedence(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        
        } while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;

    }

int main(){
    cout<<infinxtopostprefix("(a-b/c)*(a/k-l)");
}