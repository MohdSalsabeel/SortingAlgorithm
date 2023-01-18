#include<iostream>
#include<queue>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<stack>
#include<unordered_set>
using namespace std;



void insertionSort(int arr[], int n) {	
	for (int i = 1; i < n ; i++) {
		int temp = arr[i];
		int j = i-1;
		while ((arr[j] > temp) && j >= 0) {
			arr[j+1] = arr[j];
			j=j-1;
		}
		arr[j+1] = temp;
	}
}


int main() {
	
	int arr[] = { 64,25,12,22,11 };
	//int arr[] = { 2, 69, 45, 26, 37 };
	//int arr[] = { 10,1,7,4,8,2,11 };
	int len = sizeof(arr) / sizeof(arr[0]);
	insertionSort(arr,len);

	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
