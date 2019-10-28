#include <bits/stdc++.h>

void insertionSort(int arr[], int n) {
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(int arr[], int n) {
	int i;
	for (i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int main() {
	int a[] = { 12, 11, 13, 5, 6 };
	int n = sizeof(a) / sizeof(a[0]);

	insertionSort(a, n);
	printArray(a, n);

	return 0;
}
