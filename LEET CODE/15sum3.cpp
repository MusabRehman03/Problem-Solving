#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

void sum3(int array[], int size);
int main() {
	int size;

	cout << "enter the size of the array: ";
	cin >> size;

	int* nums = new int[size];

	for (int i = 0; i < size; i++) {
		cout << "enter the number for index: " << i + 1 << "  ";
		cin >> nums[i];
	}

	sum3(nums, size);

	delete[]nums;
	nums = NULL;
}
void sum3(int array[], int size) {
	int count = 0;
	int ptr = 0;
	
    vector<int> v1;
	int count1 = 0;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				continue;
			}
			else {
				for (int k = 0; k < size; k++) {
					if (k == j||i==k) {
						continue;
					}
					else
						if (array[i] + array[j] + array[k] == 0) {
							int x = abs(array[i]) + abs(array[j]) + abs(array[k]);
							v1.push_back(x);
							ptr++;
							count1 = 0;
							for (int i = 0; i < ptr ; i++) {
								if (v1[i] == x) {
									count1++;
								}

							}
							if (count1 <=1) {
								cout << "the required triplets are: [" << array[i] << ',' << array[j] << "," << array[k] << "]" << endl;
								count += 1;

							}

						}
				}

			}
		}
	}
	if (count == 0) {
		cout << "all the possible triplets are : []";
	}

	





}