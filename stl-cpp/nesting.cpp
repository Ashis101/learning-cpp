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
            temp.push_back(y);
        }
        v.push_back(temp);
    }


}

