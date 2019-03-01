#include<bits/stdc++.h>
using namespace std;
int checknum(vector<int> arr,int len)
{
    int z=0;
    for(int i=0;i<len;i++)
            {
            if(arr[i]!=0){
                
                z++;}
            }  
            return z;
}
int total(vector<int> arr,int len)
{
    int s=0;
    for(int i=0;i<len;i++)
        s=s+arr[i];
    return s;
}

int solve (vector<int> arr) {
   int len,sum=0,z,x,y;
   len=arr.size();
   sort(arr.begin(),arr.end());
   for(int i=0;i<len-1;i++)
   {
       for(int j=i+1;j<len;j++)
       {
           x=arr[i]^arr[j];
           y=arr[i]+arr[j];
       if(x==y)
        {
            arr[j]=y;
            arr[i]=0;
            break;
        }
       }
   }
   z=checknum(arr,len);
   //cout<<z;
        int j=0;
        while(z>4)
        {
            sort(arr.begin(),arr.end());
            if(arr[j]!=0&&arr[j+1]!=0){
                arr[j+1]=arr[j+1]^arr[j];
                arr[j]=0;
            }
            j++;
            z=checknum(arr,len);
            
        }
        //cout<<z<<"lol";
        sum=total(arr,len);
    return sum;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i_arr=0; i_arr<n; i_arr++)
    {
    	cin >> arr[i_arr];
    }

    int out_;
    out_ = solve(arr);
    cout << out_;
}
