#include<iostream>
using namespace std;
void arrayPartition(int nums[],int size);
int main(){
    int n;
    
    cout<<"enter the size of the array";
    cin>>n;

    int nums[n];
    for(int i=0;i<n;i++){
        cout<<"enter the number for index : "<<i+1<<"  ";
        cin>>nums[i];
    }
    sort(nums,nums+n);
arrayPartition(nums,n);
}
void arrayPartition(int nums[],int size){
    int sum=0;
    int one =0;
    int two =1;
    cout<<"the optimal pairs are : "<<endl;
    for(int i=0;i<size/2;i++){
        cout<<"["<<nums[one]<<","<<nums[two]<<"] ,";
        sum = sum+nums[one];
        one += 2;
        two += 2;
    }
    cout<<"the maximum pairs MIN sum is : "<<sum;
}