#include<iostream>
#include<queue>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<stack>
#include<unordered_set>
using namespace std;

void merge(int* arr, int start, int end) {
	int middle = start + (end - start) / 2;
	int len1 = middle - start + 1;
	int len2 = end - middle;

	int *first = new int[len1];
	int *second = new int[len2];

	int mainArrayIndex = start;
	for (int i = 0; i < len1; i++) {
		first[i] = arr[mainArrayIndex++];
	}

	mainArrayIndex = middle + 1;
	for (int j = 0; j < len2; j++) {
		second[j] = arr[mainArrayIndex++];
	}

	int i1 = 0;
	int j1 = 0;
	mainArrayIndex = start;
	while (i1 < len1 && j1 < len2) {
		if (first[i1] < second[j1]) {
			arr[mainArrayIndex++] = first[i1++];	
		}
		else {
			arr[mainArrayIndex++] = second[j1++];	
		}
		
	}

	while (i1 < len1) {
		arr[mainArrayIndex++] = first[i1++];
	}

	while (j1 < len2) {
		arr[mainArrayIndex++] = first[j1++];
		
	}

	delete[] first;
	delete[] second;
}

void mergeSort(int arr[],int start,int end) {	
	
	if (start >= end) {
		return;
	}

	int mid = start + (end - start) / 2;
	mergeSort(arr, start, mid);
	mergeSort(arr, mid + 1, end);

	merge(arr, start, end);

	
	
}




int main() {
	
	
	//int arr[] = { 64,25,12,22,11 };
	//int arr[7] = { 38,27,43,3,9,82,10 };
	int arr[] = { 5,9,12,4,1 };
	
	//int start = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	
	mergeSort(arr,0,len-1);

	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	

	

	return 0;
}
