#include<iostream>

using namespace std;

const int ARR_LENGHT = 6;

int binarySearch(int arr[ARR_LENGHT], int searchValue);

int main() {
	int arr[ARR_LENGHT];
	int searchValue;

	cout << "Input " << ARR_LENGHT << " array value:" << endl;
	for (int i = 0; i < ARR_LENGHT; i++) {
		cin >> arr[i];
	}
	cout << "Input search value:" << endl;
	cin >> searchValue;

	searchValue = binarySearch(arr, searchValue);
	if (searchValue != -1) {
		cout << "Value found, index value: " << searchValue << endl;
	} else {
		cout << "Value not found" << endl;
	}
}

int binarySearch(int arr[ARR_LENGHT], int searhValue) {
	int low = 0, height = ARR_LENGHT;
	int mid = (low + height) / 2;

	while (low < height) {
		if (arr[mid] > searhValue) {
			height = mid;
		} else {
			low = mid + 1;
		}

		mid = (low + height) / 2;
	}

	if (arr[--height] == searhValue) {
		return height;
	} else {
		return -1;
	}
}