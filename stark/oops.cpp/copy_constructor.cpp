#include<iostream>
using namespace std;
class A{
    private:
    int x,y;
    public:
    A(int i,int j){
        x=i;y=j;
    }
    int resultx(){
        return x;
    }
    int resulty(){
        return y;
    }
};
int main(){
    A ob1(10,20);
    A ob2=ob1;
    cout<<ob2.resultx()<<" "<<ob2.resulty();

}