#include<bits/stdc++.h>
#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define pb push_back
#define mp make_pair
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007

void dfs(int node,vector<int> v[],int visited[])
{
	if(visited[node]==1)
		return;
	visited[node]=1;
	for(int i=0;i<v[node].size();i++)
	{
		dfs(v[node][i],v,visited);
	}

	cout<<node<<" ";
} 
int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int n,i,j;
	int t,q;
    //input graph
    //input no.of nodes,no of edges;
    int m;
    cin>>n>>m;
    vector<int> v[n+1];//adjacency list of graph
    for(i=0;i<m;i++)
    {
    	int u1,u2;
    	cin>>u1>>u2;
    	v[u1].push_back(u2);
    	v[u2].push_back(u1);
    }
    int visited[n+1];
    // for(i=0;i<=n;i++)
    // {
    // 	for(j=0;j<v[i].size();j++)
    // 	{
    // 		cout<<v[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // }
    for(i=0;i<=n;i++)
    {
    	visited[i]=0;
    }
    // cout<<"yo\n";
    // makign visited array 0 represents this node is not visited 
    // and 1 represents visited node
    //graph input done
    // applying dfs
    dfs(1,v,visited);
	return 0;
}
