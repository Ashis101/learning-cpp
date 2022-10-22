#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void printVec(vector<string> &v){

    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}

int main(){
    vector<string> v;
    // taking input from user
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x ;
        cin>> x;
        v.push_back(x);
    }

    // coping vector to another vector    
    printVec(v);

}
