#include<iostream>
#include<queue>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<stack>
#include<unordered_set>
using namespace std;

int partition(int arr[], int s, int e) {
	int value = arr[s];
	int count = 0;
	//int l = sizeof(arr) / sizeof(arr[0]);
	for (int i = s+1; i <=e ; i++) {
		if (arr[i] <= value) {
			count++;
		}
	}
	// place pivot at right position
	int pivotIndex = s + count;
	swap(arr[pivotIndex], arr[s]);
	// take care of left part and right part
	int i = s;
	int j = e;
	
	while (i<pivotIndex && j>pivotIndex) {
		while (arr[i] < arr[pivotIndex]) {
			i++;
		}
		while (arr[j] > arr[pivotIndex]) {
			j--;
		}

		if (i<pivotIndex && j>pivotIndex) {
			swap(arr[i], arr[j]);
		}
	}
	return pivotIndex;
}


void quickSort(int arr[], int s, int e) {
	if (s >= e) {
		return;
	}

	// find index of partition
	int p = partition(arr, s, e);
	// Sort left part
	quickSort(arr, s, p - 1);
	// Sort right part
	quickSort(arr, p + 1, e);
}


int main() {
	//int arr[] = { 64,25,12,22,11 };
	int arr[7] = { 38,27,43,3,9,82,10 };
	//int arr[] = { 5,9,12,4,1 };
	int n = 7;

	quickSort(arr, 0, n - 1);
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
