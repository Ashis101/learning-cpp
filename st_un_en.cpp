#include<iostream>

using namespace std;

struct employee
{
    float salary;
    int age;

};


// typedef struct employee
// {
//     float salary;
//     int age;

// }ep;


union  price
{
    /* data */
    float rice;
    float car;
};


int main(){
    // ep ashis;
    struct employee ashis;
    ashis.age=24;
    ashis.salary=2000.221;

    cout<<"ashis: "<<ashis.age;

    union price total_price;
    total_price.car=50000;
    total_price.rice=87;

    cout<<"Car Price: "<<total_price.car;
    cout<<"Rice Price: "<< total_price.rice;

    enum Meal{breakfast,lunch,dinner};

    Meal m1=lunch;

    cout<<"M1: "<<m1;
}