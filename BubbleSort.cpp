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


// Second and Best way

#include<iostream>
#include<queue>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<stack>
#include<unordered_set>
using namespace std;

// Optimize the code
// Best case : already sorted
// Worst case: reverse sorted

void bubbleSort(int arr[], int n) {
	
	for (int i = 1; i < n-1; i++) {
		bool isSort = false;
		for (int j = 0; j < n-i; j++) {
			if (arr[j] > arr[j+1]) {
				
				swap(arr[j], arr[j+1]);
				isSort = true;
			}
			
		}
		if (isSort == false) {
			break;
		}
		
	}
}


int main() {
	
	//int arr[] = { 45,23,67,12,90 };
	int arr[] = { 2, 69, 45, 26, 37 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr,len);

	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
