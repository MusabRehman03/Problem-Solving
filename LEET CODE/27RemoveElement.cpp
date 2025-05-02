#include<iostream>
#include<algorithm>
using namespace std;
int removeElement(int nums[],int size,int val);
int main(){
    int size;
    cout<<"enter the size of array : ";
    cin>>size;
    int nums[size];
    for(int i=0;i<size;i++){
        cout<<"enter the number for the array of index "<<i+1<<" : ";
        cin>>nums[i];
    }
    int val;
    cout<<"enter the value you want to remove from the array : ";
    cin>>val;

    int k = removeElement(nums,size,val);
    sort(nums, nums + size);
    cout<<"the new array is : "<<endl;
    cout<<"[";
    for(int i=0;i<size;i++){
        cout<<nums[i]<<",";
    }
    cout<<"\b]";
}
int removeElement(int nums[],int size,int val){
    int k=0;
    for(int i=0;i<size;i++){
        if(nums[i]==val){
            nums[i]='_';

        }
        else{
            k++;
        }
    }
    return k;
}