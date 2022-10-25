#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){

    set<string> s;

    s.insert("sa");
    s.insert("as");

    for(string str: s){
        cout<< str <<endl;
    }

    set<char> v;
    v={'a','b','c','c','a'};

    for(char ch:v){
        cout<< ch << endl;
    }

    vector<string> va={"ash","bash","ash","bash","cash"};
    cout<<"vector output"<<endl;
    for(auto v:va){
        cout<<v<<endl;
    }
    set<string> ha;

    for (int i=0;i<va.size();i++)
    {   
        ha.insert(va[i]);
    }
    
    cout<< " set out put "<<endl;
    for(auto h:ha){
        cout<< h <<endl;
    }

    set<string> stringSet;
    stringSet.insert("code") ;
    stringSet.insert("in") ;
    stringSet.insert("c++") ;
    stringSet.insert("is") ;
    stringSet.insert("fast") ;

}
