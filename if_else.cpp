#include<iostream>

using namespace std;

int main(){
    int a,b,c;

    cin >>a;
    cin >>b;
    cin >>c;

    if(a > 10 and b < 15){
        cout<<"Fizz";
    }else if(a > b and c > 20){
        cout<<"Bizz";
    }else{
        cout<<"Fizz Bizz";
    }

    int age;
    cout<<"Enter Age";
    cin>>age;
    
    switch (age)
    {
    case 18:
        cout << "You are eligable";
        break;
    case 10:
        cout<<"You rnot eligable";  
        break;
    default:
        break;
    }

}