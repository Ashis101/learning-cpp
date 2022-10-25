#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int main(){

    // vector of array 
    //vector<int> v[3]; // 3 is not point to size of vector it point to number of array in vector
    // [3] means v[[],[],[]]

    vector<vector<int>> v;

    for(int i=0;i<3;i++){
        int x;
        cin>>x;
        vector<int> temp;
        for(int j;j<x;j++){
            int y;
            // v[i].push_back(y);
            temp.push_back(y);
        }
        v.push_back(temp);
    }


    map<pair<string,string>,vector<int>> m;

    m[{"ashis","banerjee"}].push_back(10);
    m[{"subho","chandra"}].push_back(20);

    for(auto &it: m){
        auto &name=it.first;
        auto &list=it.second;

        cout<<"First"<<"::"<< name.first;
        cout<<"list"<<"::"<< list;
    }
}

