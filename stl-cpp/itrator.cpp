#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){

    // 

    vector<int> v={2,3,5,6,7};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;

    vector<int> :: iterator it=v.begin();
    for ( it; it != v.end() ; it++)
    {
        cout<< (*it) << endl;
    }
    
    // difference between it++ and it+1 
    // it++ point to next itrator, it+1 points to next memory block 

    // iterator with nested container

    vector<pair<int,int>> vp={{1,2},{3,5},{4,6}};
    vector<pair<int,int>> :: iterator it1=vp.begin();

    for (it1; it1 != vp.end(); it1++)
    {
        // iterator pointing to a pair
        cout<<(*it1).first <<endl;
        // another syntex of iterator
        // cout<<(it1->first)<<" "<<(it1->second)<<endl;
    }


    // range itrator

    for(pair<int,int> &value: vp){
        cout<<value.first<<endl;
    }

    // using auto with range 
    // auto detect what data type assign to valiable
    for(auto &value1: vp){
        cout<<value1.first<<endl;
    }




    


    

}

