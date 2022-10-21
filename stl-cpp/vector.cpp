#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void printVec(vector<int> v){
    // using v as variable means coping all thing in v parameter ,coping things takes O(n) times which is costly 
    // for optimization (as per situation) use reference like &v
    
    for (int i = 0; i < v.size(); i++)
    {
        // v.size() -> O(1)
        cout<<v[i]<<" ";


    }
    

}

int main(){
    // (define size , fill with this value) vector
    // vector<int> v(10,false);
    // initialize  vector
    vector<int> v;
    // taking input from user
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x ;
        cin>> x;
        v.push_back(x);
    }

    // coping vector to another vector
    vector<int>v2=v; // O(n)
    
    printVec(v);

}
