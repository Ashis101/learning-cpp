#include<iostream>


using namespace std;

int swap(int arr[],int size){

    if(size < 2){
        return 0;
    }
    int size_now=0;
    if(size%2 == 0){size_now=size;}else{size_now=size-1;}
    int i=1;
    while(i < size){
        cout<<i<<endl;
        int before_val=arr[i-1];
        int now=arr[i];
        arr[i-1]=now;
        arr[i]=before_val;
        i+=2;
    }
    
    cout<<"Print new array"<<endl;
   
}

void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){

    int size=5;
    int arr[5]={0,1,2,3,4};
    swap(arr,size);
    // printArray(arr,size);

    for(int k:arr){
        cout<<" element: "<<k<<endl;
    }
}