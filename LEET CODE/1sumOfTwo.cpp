#include<iostream>
using namespace std;
void desiredSum(int nums[],int size,int target);

int main(){
    int size;
    int target;
    cout<<"enter the size of the array";
    cin>>size;

    int nums[size];
    for(int i=0;i<size;i++){
        cout<<"enter the number for index : "<<i+1<<"  ";
        cin>>nums[i];
    }
    cout<<"enter the target number ";
    cin>>target;

    desiredSum(nums,size,target);

}

void desiredSum(int nums[],int size,int target){
int count=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==j){
                continue;
            }
            else if(target==nums[i]+nums[j]){
                cout<<"["<<nums[i]<<","<<nums[j]<<"]"<<endl;

                count += 1;
            }
        }
        if(count>0){
            break;
        }
    }

}
