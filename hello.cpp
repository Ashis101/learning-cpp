#include<iostream>
#include<string>
using namespace std;

string i(string a){
    string x="ashis"+a;
    return x;
}

int main(){
    int a=10, b=20;
    string hi;
    cin>> hi; 
    cout << i(hi);
    // cout<<"hello world c"<<"::"<<a+b ;
    // cout<<"\n "<<"::"<<hi;
    return 0;
}