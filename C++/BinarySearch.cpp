#include <iostream>

using namespace std;

int search(int arr[],int l,int r,int x)
{
    int mid=0;
    if(l>r)
    {
        cout<<"not found";
        return 0;
    }
    mid=((l+r)/2);
    if(arr[mid]==x)
    {
        cout<<"found";
    }
    else if(arr[mid]>x)
    {
        return search(arr,l,mid-1,x);
    }
    else if(arr[mid]<x)
    {
        return search(arr,mid+1,r,x);
    }
    return 0;
}
int main()
{
    cout<<"Enter size of array\n";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter array elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element for search\n";
    int y;
    cin>>y;
    search(a,0,n,y);
    return 0;
}
