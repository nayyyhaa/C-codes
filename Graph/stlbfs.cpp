#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int>v[100007];
int visited[100007];
int main(){
	int n,m;
	cout<<"Enter the number of vertices and edges: \n";
	cin>>n>>m;
	
	cout<<"Enter the edges of the graph or tree \n";
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	int src;
	cout<<"Enter the source vertex: \n";
	cin>>src;
	
	queue<int>bfs;
	bfs.push(src);
	
	cout<<"BFS TRAVERSAL: \n";
	while(!bfs.empty()){
		int temp=bfs.front();
		cout<<temp<<" ";
		visited[temp]=1;
		bfs.pop();
		
		for(int i=0;i<v[temp].size();i++){
			int te=v[temp][i];
			if(!visited[te]){
				bfs.push(te);
				visited[te]=1;
			}
		}
	}
   return 0;
}


/* Sample Test Case
	
	Enter the number of vertices and edges: 
	5 4
	Enter the edges of the graph or tree 
	1 2
	2 4
	1 3
	2 5
	Enter the source vertex: 
	1
	BFS TRAVERSAL: 
	1 2 3 4 5
	
*/
