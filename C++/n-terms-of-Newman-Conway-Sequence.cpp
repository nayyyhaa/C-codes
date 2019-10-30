// C++ Program to print n terms 
// of Newman-Conway Sequence 
#include <bits/stdc++.h> 
using namespace std; 

// Function to find 
// the n-th element 
void sequence(int n) 
{ 
	// Declare array to store sequence 
	int f[n + 1]; 
	f[0] = 0; 
	f[1] = 1; 
	f[2] = 1; 
	
	cout << f[1] << " " << f[2] << " "; 
	
	for (int i = 3; i <= n; i++) { 
		f[i] = f[f[i - 1]] + f[i - f[i - 1]];		 
		cout << f[i] << " "; 
	} 
} 

// Driver Program 
int main() 
{	 
	int n = 13;	 
	sequence(n);	 
	return 0; 
} 
