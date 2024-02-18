#include<bits/stdc++.h>
using namespace std;
int precedence(char a){
   if(a=='^'){
   return 3;}
   
   else if(a=='*'||a=='\')
   return 2;

   else if(a=='+'||a=='-')
   return 1;
   else
   return -1;
   
}

 string infinxtopostprefix(string s){
    reverse(s.begin(),s.end());
    stack<char>st;
    string res;

    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='z')
        res+=s[i];
        else if(s[i]==')'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty())
            st.pop();
        }
        else{
            while(!st.empty() && precidence(st.top())>=precidence(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }

       
         while(!st.empty()){
            res+=st.top();
            st.pop();
    }
    reverse(res.begin(),res.end());
    return res;

}

int main(){
cout<<infinixtopostprefix("(a-b/c)*(a/k-l)");
}