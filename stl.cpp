#include<iostream>
#include<vector>
#include<deque>

using namespace std;


void vectors(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout<<"In 1th index: "<<v[1]<<endl;
    cout<<"Random Access: "<<v.at(2)<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    cout<<"Size: "<< v.size()<<endl;
    cout<<"First Element: "<<v.front()<<endl;

    cout<<"Before Pop: "<<endl;
    for(int i:v){
        cout<<i<<endl;
    } 

    cout<<"After Pop: "<< endl;v.pop_back();
    for(int i:v){
        cout<<i<<endl;
    } 

    // Another type initialize
    // a(length of the vector,all the five element would be 1)
    vector<int> a(5,1);
    cout<<"vector a: "<<endl;
    for(int j:a){
        cout<<" a: "<<j<<endl;
    }
    // copy another vector
    vector<int> new_v(a);
    cout<<"vector new_v: "<<endl;
    for(int j:new_v){
        cout<<" new_v: "<<j<<endl;
    }

}

void deques(){
    deque<int> k;

    k.push_back(1);
    k.push_back(2);
    k.push_front(0);

    cout<<"In the deque: "<<endl;

    for(int p:k){
        cout<<p<<endl;
    }

    cout<<"After pop: ";
    k.pop_back();

    


}

int main(){
    vectors();

}