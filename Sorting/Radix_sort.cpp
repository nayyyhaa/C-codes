#include<iostream>
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long int
#define read(a) long long int a; cin>>a;
#define readstr(s) string s; cin>>s;
#define readarr(a,l) long long int a[l]={0}; for(ll i=0;i<l;i++) cin>>a[i];
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define ff first
#define ss second
#define readmtrx(i,j,a,b) ll arr[a][b]={0};for(ll i=0;i<a;i++)for(ll j=0;j<b;j++) cin>>arr[i][j];
#define v(pi) vector<ll>pi
#define vp(pi) vector<pair<ll,ll>>pi
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define pb(p) push_back(p)
#define mp make_pair
#include <cmath>
#include <map>
#define mi(lol) map<ll,ll>lol
using namespace std;


ll getMax(ll arr[], ll n)
{
    ll mx = arr[0];
    for (ll i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}
void countSort(ll arr[], ll n, ll exp)
{
    ll output[n];
    ll i, count[10] = {0};

    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}
void radixsort(ll arr[], ll n)
{
    ll m = getMax(arr, n);
    for (ll exp = 1; m/exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

void print(ll arr[], ll a)
{
    cout<<"Sorted array is : ";
    loop(i,0,a)
        cout << arr[i] << " ";
}
int main()
{
    //Enter length of array for sorting
    read(a);
    // Enter array of length a
    readarr(arr,a);
    radixsort(arr, a);
    print(arr, a);
    return 0;
}
