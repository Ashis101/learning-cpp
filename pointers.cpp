#include<iostream>

using namespace std;

int main(){
    /*
        * is (value at -->) dereferencing operator
        & is  address of  operator


    */

    int a=20;
    int* b=&a;

    cout<<"a= "<<a;
    cout<<"&a= "<<&a;
    cout<<"b= "<<b;
    cout<<"*b= "<<*b<<endl;

    int marks[]={10,20,30,40};

    int* p=marks;

    cout<<"marks[0]"<<*(p)<<endl;
    cout<<"marks[1]"<<*(p+1)<<endl;
}
