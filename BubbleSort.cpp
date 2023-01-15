#include<iostream>
#include<queue>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<stack>
#include<unordered_set>
using namespace std;

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


int main() {
	
	int arr[] = { 45,23,67,12,90 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr,len);

	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
