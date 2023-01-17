#include<iostream>
#include<queue>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<stack>
#include<unordered_set>
using namespace std;



void selectionSort(int arr[], int n) {
	
	for (int i = 0; i < n-1; i++) {
		int minIndex = i;
		
		for(int j=i+1;j<n;j++){
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}	
		}
		swap(arr[i], arr[minIndex]);
	}
}


int main() {
	
	//int arr[] = { 64,25,12,22,11 };
	int arr[] = { 2, 69, 45, 26, 37 };
	int len = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr,len);

	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
