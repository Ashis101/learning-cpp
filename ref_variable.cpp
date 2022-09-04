#include<iostream>

// include another file in this file

// #include "this.filename"

using namespace std;

int c=12;
int main(){

    int c=7;
    cout<< "Local c is: "<< c << endl;
    cout<< "Global c is: "<< ::c << endl;
    c=5;

    cout<< "Global c is: "<< ::c << endl; // accessing out of scop variable through scoop resolution operator

    // float,double,long literals
    // uppercase ,lowercase letter supported.

    float x=10.2f;
    float z=44.20L;
    long double y=50.55l;
    // long double y=50.55L;

    cout<<"Value of x: "<< sizeof(x);
    cout<<"Value of y: "<< sizeof(y);
    cout<<"Value of z: "<<sizeof(z)<<endl;

    // Reference variable

    float a=455.1;
    float &b=a;

    b+=5;

    cout<<"Value of a: "<< a<<endl;
    cout<<"Value of b: "<<b<<endl;

    // TypeCasting

    float d=54.55;
    cout<<"Change to int: "<< (int)d<<endl;
    cout<<"Change to int another way: "<< int(d)<<endl;


}


// :: is scop resolution operator 