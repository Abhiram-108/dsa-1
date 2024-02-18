#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream ob1;
    string s;
    ob1.open("abhi.txt");
    while(getline(ob1,s)){
        cout<<s<<endl;
    }
    ob1.close();
}