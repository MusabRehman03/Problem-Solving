#include<iostream>
using namespace std;
int productfunc(int x,int nums[],int size);

int main(){
    int size;
    cout<<"enter the size of the array ";
    cin>>size;
    int nums[size];
    for(int i=0;i<size;i++){
        cout<<"entre the value for index "<<i<<" : ";
        cin>>nums[i];
    }

    int products[size];
    for(int i=0;i<size;i++){
        int temp = productfunc(i,nums,size);
        products[i]=temp;

    }
    for(int i=0;i<size;i++){
        cout<<products[i]<<"  ";
    }

}
int productfunc(int x,int nums[],int size){
    int product =1;
    for(int i=0;i<size;i++){
        if(i==x){
            continue;
        }
        else{
            product = product*nums[i];
        }
    }
    return product;

}

// #include <iostream>
// using namespace std;
// // int* productArray1(int nums[],int size);

// int *productArray2(int nums[], int size);

// int main()
// {
//     int size;
//     cout << "enter the size of the array ";
//     cin >> size;
//     int nums[size];
//     for (int i = 0; i < size; i++)
//     {
//         cout << "entre the value for index " << i << " : ";
//         cin >> nums[i];
//     }
//     // int* p= productArray1(nums,size);
//     // for(int i=0;i<size;i++){
//     //     cout<<p[i]<<"   ";
//     // }

//     int *p = productArray2(nums, size);

//     for (int i = 0; i < size; i++)
//     {
//         cout << p[i] << "\t";
//     }
// }

// // int* productArray1(int nums[],int size){

// //     int* products = new int [size];

// //     for(int i=0;i<size;i++){
// //         int  product=1;
// //         for(int j=0;j<size;j++){
// //             if(i==j){
// //                 continue;

// //             }
// //             else{
// //                 product = product*nums[j];
// //                 // cout<<i<< ": "<<product;

// //             }

// //         }
// //         // cout<<"product : "<<product;
// //         products[i]=product;
// //     }
// // return products;
// // }

// int *productArray2(int nums[], int size)
// {
//     int j = 0;
//     int *products = new int[size];
//     int product = 1;
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if ((j == i) /*&& (j != size - 1)*/)
//         {
//             continue;
//         }

//         else if (i == size - 1)
//         {
//             products[j] = product * nums[i];
//             product = 1;
//             i = 0;
//             j++;
//             count++;
//             if (j == i && j == size - 1)
//             {
//                 break;
//             }
//         }
//         // else if (j==i&&j==size-1){
//         //     products[j]= product;
//         //     break;
//         // }

//         else
//         {
//             product = product * nums[i];
//         }
//         if (j == size - 1)
//         {
            
//         }
        
//     }
//     return products;
// }
