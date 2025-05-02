#include<iostream>
using namespace std;
void maximumSubarray(int array[],int size);

int main(){
    int size;
    cout<<"enter the size of the array ";
    cin>>size;
    int nums[size];
    for(int i=0;i<size;i++){
        cout<<"entre the value for index "<<i<<" : ";
        cin>>nums[i];
    }
    maximumSubarray(nums,size);
}
void maximumSubarray(int array[],int size){
    int sum=1;int maxSum=1;int whole=1;
    int start=0,end=0;
    

    for(int i=0;i<size;i++){
        maxSum *= array[i];
         whole = maxSum;
        //  cout<<maxSum;

    }
    // cout<<maxSum;
    for(int i=0;i<size;i++){
         sum =1;
         sum *= array[i];
        for(int j=i+1;j<size;j++){
            sum = sum * array[j];

            if(maxSum<sum){
                maxSum=sum;
                start=i;end=j;
            }

        }
    }
    if(maxSum == whole ){
        cout<<maxSum <<" is the maximum sum found "<<endl;
        cout<<"and the sub ARRAY is [ ";
    for(int i=0;i<size;i++){
        cout<<array[i]<<",";
    }
    cout<<" ]";
    }
    else{

    
    cout<<maxSum<<" is the maximum sum found"<<endl;
    cout<<"and the sub ARRAY is [ ";
    for(int i=start;i<=end;i++){
        cout<<array[i]<<",";
    }
    cout<<" ]";
    }

}