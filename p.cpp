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


void rotating_arr(int nums[],int k){

    int last=k-1;
    int first=0;

    while (first < last)
    {
        int from_first_ele=nums[first];
        nums[first]=nums[last];
        nums[last]=from_first_ele;


        first+=1;
        last-=1;
    }
    

}
void rotate(int nums[], int k) {
        int last=sizeof(nums)/sizeof(int);
        int first=0;

        while (first < k)
        {
            nums[(first+k)%last]=nums[first];
            first+=1;
        }
    }

int main(){

    int size=3;
    int arr[5]={0,1,2,3,4};
    // swap(arr,size);
    // printArray(arr,size);
    // int sizes=sizeof(arr)/sizeof(int);
    // int k=3;
    // for(int i=0;i<sizes;i++){
        
    //     cout<<(i+k)<<" "<<(i+k)%sizes<<endl;

    // }
    cout<<"After Reverse"<<endl;
    rotate(arr,size);

    for(int k:arr){
        cout<<" element: "<<k<<endl;
    }
}