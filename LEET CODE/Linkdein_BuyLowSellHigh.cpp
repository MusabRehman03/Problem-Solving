#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void buyLowSellHigh(int array[],int size);

int main(){
    int size ;

    cout<<"enter the size of the array ";
    cin>>size;

    int array[size];
    // int secondArray[size];
    

    for(int i=0;i<size;i++){
       cout<< "enter the value for index "<<i<<endl;
       cin>>array[i];
    }
    buyLowSellHigh(array,size);


}
void buyLowSellHigh(int array[],int size){
    int indexOfLow;
    int secondArray[size];
    for(int i=0;i<size;i++){
        secondArray[i]=array[i];
    }
    sort(secondArray,secondArray+size);
  
    for(int i=0;i<size;i++){
        if(secondArray[0]==array[i]){
            indexOfLow=i;
        }

    }
    int greatest=0;
    int count=0;
    for(int i=indexOfLow+1;i<size;i++){
        if(greatest<array[i]){
            greatest= array[i];
            
        }

    }
    if(greatest<array[indexOfLow]){
        cout<<"no profit";
    }
    else {
        cout<<"your profit is"<<greatest-array[indexOfLow];

    }


}
