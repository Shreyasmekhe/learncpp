#include<iostream>
using namespace std;
void dosomething(string &s){
    s[0]='t';
    cout<<s<<endl;

}
int main(){
    string s;
    cin>> s;
    dosomething(s);
    cout<< s<<endl;
    return 0;
}