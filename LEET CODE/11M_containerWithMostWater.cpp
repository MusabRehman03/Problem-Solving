#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int size;
	cout << "input size of array: ";
	cin >> size;
	int* array = new int[size];
	cout << "input array elements:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ": ";
		cin >> array[i];
	}
	int length = size * size - size;
	int* area = new int[length]();
	int x = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				continue;
			}
			area[x] = min(array[i], array[j]) * (max(i,j) - min(i,j)); x++;
		}
	}
	int max = area[0];
	for (int i = 0; i < length; i++)
	{
		if (area[i] > max) {
			max = area[i];
		}
	}
	cout <<"output: " << max << endl;
	delete[]array;
	delete[]area;
}
