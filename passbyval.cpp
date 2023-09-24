#include<iostream>
using namespace std;
void something(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
//pass by value
int main(){
    int num=10;
    something(num);
    
    cout<<num;    
    return 0;
}