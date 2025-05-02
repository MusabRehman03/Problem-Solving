#include<iostream>
#include<algorithm>
using namespace std;

void findMajorityElement(int array[], int n);

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the value for index " << i << ": ";
        cin >> nums[i];
    }

    sort(nums, nums + n); 
    findMajorityElement(nums, n);

    return 0;
}

void findMajorityElement(int array[], int n) {
    float compare = n / 2; 
    
    for (int i = 0; i < n; i++) {
        float count = 1;

       
        for (int j = i + 1; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
            } else {
                break; 
            }
        }

        
        if (count > compare) {
            cout << "The majority element is: " << array[i] << endl;
            return; 
        }

        
        i = i + count - 1;
    }
}


