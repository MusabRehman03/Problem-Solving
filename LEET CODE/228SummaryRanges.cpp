#include<iostream>
#include<algorithm>
using namespace std;

void summaryRanges(int array[],int n);

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int nums[n];
    cout<<" NOTE :  you have to enter unique values for array in ascending order"<<endl;
        for (int i = 0; i < n; i++) {
        cout << "Enter the value for index " << i << ": ";
        cin >> nums[i];
    }
summaryRanges(nums,n);
}
void summaryRanges(int array[],int n){
int j;

    for(int i=0;i<=n;i++){
     int count =1;
        for(j=i+1;j<=n;j++){
            if((array[j-1]+1)==array[j]){
                count++;
                continue;
            }
            else{
                cout<<"["<<array[i]<<" -> "<<array[j-1]<<"] ,";
                break;
            }
        }
        i = i+count-1;
        

    }

}