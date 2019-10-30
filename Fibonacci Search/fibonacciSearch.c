#include <stdio.h>


/*
    Fibonacci Search
    Coded by ShubhankarKG

    Properties :
    1. Works with sorted arrays
    2. A Divide and Conquer ALgorithm
    3. Has Log n time complexity

*/

// Utility function that returns the minimum of two numbers
int min(int a, int b){
    if (a <= b) return a;
    else return b;
}

int fibonacciSearch(int arr[], int x, int n){
    int fib2 = 0;
    int fib1 = 1;
    int fibM = fib1 + fib2;

    while(fibM<n){
        fib2 = fib1;
        fib1 = fibM;
        fibM = fib1 + fib2;
    }

    int offset = -1;

    while(fibM > 1){
        int i = min(offset + fib2 , n-1);

        if (arr[i]<x){
            fibM = fib1;
            fib1 = fib2;
            fib2 = fibM - fib1;
            offset = i;
        }

        else if (arr[i]>x){
            fibM = fib2;
            fib1 = fib1 - fib2;
            fib2 = fibM - fib1;
        }

        else return i;
    }

    if (fib1 && arr[offset+1] == x) return (offset+1);

    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,11, 12,13};
    int n = sizeof(arr)/sizeof(arr[1]);
    int x = 6;
    printf("Element found at index %d", fibonacciSearch(arr,x,n));
    return 0;
}


