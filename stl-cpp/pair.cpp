#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

    pair<int, string> p;
    // 1st type
    // p = make_pair(1, "ashis");
    // 2nd type
    p = {1,"Ashis"}; 
    cout<< p.first << "" << p.second;

    // Array of pairs
    pair<int,int> x[3]={{1,1},{1,2},{1,3}};
    for(int i=0;i<3;i++){
        cout<<x[i].first<<" "<<x[i].second;
    }

    // pair of pair making
    pair<int,pair<int,string>> as;
    as={1,{10,"ashis"}};
    cout<<as.second.second;

    
  
}
