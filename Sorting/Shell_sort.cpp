#Shell Sorting in C++ // Description of Shell Sorting is down below

#include<iostream>
using namespace std;
void swapping(int &a, int &b) {        //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void shellSort(int *arr, int n) {
   int gap, j, k;
   for(gap = n/2; gap > 0; gap = gap / 2) {        //initially gap = n/2,
      decreasing by gap /2
      for(j = gap; j<n; j++) {
         for(k = j-gap; k>=0; k -= gap) {
            if(arr[k+gap] >= arr[k])
               break;
            else
               swapping(arr[k+gap], arr[k]);
         }
      }
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   shellSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}

#Enter the number of elements: 10
#Enter elements:
#23 56 97 21 35 689 854 12 47 66
#Array before Sorting: 23 56 97 21 35 689 854 12 47 66
#Array after Sorting: 12 21 23 35 47 56 66 97 689 854

#Description
#The shell sorting technique is based on the insertion sort. In the insertion sort sometimes we need to shift large block to insert #item in the correct location. Using shell sort, we can avoid large number of shifting. The sorting is done with specific interval. #After each pass the interval is reduced to make smaller interval.

#Time Complexity: O(n log n) for best case, and for other cases, it depends on the gap sequence.
#Space Complexity: O(1)