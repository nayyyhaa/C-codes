#include<iostream>
using namespace std;
int main()
{
    int arr[30];
    int n,pos;    //n -> number of elements;  pos-> index of min element
    int i,j,min;  //min -> minimum element
    int temp;     //variable for swap
    cout<<"\nNumber of elements :" ;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

//Loop for sorting
    for(i=0;i<n;i++)
    {
        pos=i;
        min=arr[i];
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                pos=j;
            }
        }

        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
//Display
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
