// C++ program to find maximum sum of bi-tonic sub-sequence 
#include <bits/stdc++.h> 
using namespace std; 

// Function return maximum sum of Bi-tonic sub-sequence 
int MaxSumBS(int arr[], int n) 
{ 
	int max_sum = INT_MIN; 

	// MSIBS[i] ==> Maximum sum Increasing Bi-tonic 
	// subsequence ending with arr[i] 
	// MSDBS[i] ==> Maximum sum Decreasing Bi-tonic 
	// subsequence starting with arr[i] 
	// Initialize MSDBS and MSIBS values as arr[i] for 
	// all indexes 
	int MSIBS[n], MSDBS[n]; 
	for (int i = 0; i < n; i++) { 
		MSDBS[i] = arr[i]; 
		MSIBS[i] = arr[i]; 
	} 

	// Compute MSIBS values from left to right */ 
	for (int i = 1; i < n; i++) 
		for (int j = 0; j < i; j++) 
			if (arr[i] > arr[j] && MSIBS[i] < MSIBS[j] + arr[i]) 
				MSIBS[i] = MSIBS[j] + arr[i]; 

	// Compute MSDBS values from right to left 
	for (int i = n - 2; i >= 0; i--) 
		for (int j = n - 1; j > i; j--) 
			if (arr[i] > arr[j] && MSDBS[i] < MSDBS[j] + arr[i]) 
				MSDBS[i] = MSDBS[j] + arr[i]; 

	// Find the maximum value of MSIBS[i] + MSDBS[i] - arr[i] 
	for (int i = 0; i < n; i++) 
		max_sum = max(max_sum, (MSDBS[i] + MSIBS[i] - arr[i])); 

	// return max sum of bi-tonic sub-sequence 
	return max_sum; 
} 

// Driver program 
int main() 
{ 
	int arr[] = { 1, 15, 51, 45, 33, 100, 12, 18, 9 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << "Maximum Sum : " << MaxSumBS(arr, n); 

	return 0; 
} 
