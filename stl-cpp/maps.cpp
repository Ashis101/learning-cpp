#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void printAll(map<int,string> &m){
    cout<<m.size()<<endl;

    
    for(auto &mp : m){
        cout<< mp.first << " "<< mp.second;
    }

}

int main(){
    // in map insertion and accesstion time complexity is O(log n)

    map<int,string> m;
    m[1]="abc";
    m[2]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});

    printAll(m);

    // find return itrator
    auto it=m.find(3); // O(log(n)) . if not find then return n  
    if(it == m.end()){
        cout<< "No Value";
    }else{
        cout<<(*it).first <<" "<< (*it).second<<endl;
    }

}


