#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main(){
    // vector<vector<int> > arr = {{1,2,3},
    //                             {4,5,6},
    //                             {7,8,9}};
      int arr[3][3] = {{1,2,3},
                       {4,5,6},
                       {7,8,9}};
        swap(arr[2][0],arr[2][2]);
        swap(arr[2][2],arr[0][2]);
        swap(arr[0][2],arr[0][0]);
        swap(arr[1][0],arr[2][1]);
        swap(arr[2][1],arr[1][2]);
        swap(arr[1][2],arr[0][1]);
    
   cout<<"new array is : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
        
        
                            


}