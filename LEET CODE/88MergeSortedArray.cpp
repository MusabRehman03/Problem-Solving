#include<iostream>
using namespace std;
void mergingSortedArrays(int nums1[],int size1, int nums2[], int n, int m);

int main(){
    int m,n;
    cout<<"enter the numbers you wanted to store in array : nums1  ";
    cin>>m;
    cout<<"enter the number of elemenst you wanted to store in array : nums2 ";
    cin>>n;
    int size1 = m+n;
    int nums1[size1];
    int nums2[n];
    cout<<"now enter the elements for both arrays in ascending order for each"<<endl;
    for(int i=0;i<size1;i++){
        if(i<m){
            cout<<"enter the value for array1 for index "<<i+1<<" : ";
        cin>>nums1[i];
        }
        else{
            nums1[i]=0;
        }
     
    }
    for(int i=0;i<n;i++){
        cout<<"enter the value for array2 for index "<<i+1<<" : ";
        cin>>nums2[i];
    }
    mergingSortedArrays(nums1,size1,nums2,n,m);

    sort(nums1,nums1+size1);
    cout<<"merged array contain elemnts : [";

    for(int i=0;i<size1;i++){
        cout<<nums1[i]<<", ";
    }
    cout<<"\b\b"<<"] ";
}
   

    void mergingSortedArrays(int nums1[],int size1, int nums2[], int n, int m){
    int j=0;
    for(int i=m;i<size1;i++){
        nums1[i]=nums2[j];
        j++;

    }


}