#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char,int> m;
    pair<char,char> p;
    map<char,int> n;
    map<char,int> ::iterator itr;
    char a[10][10];
    int mini;
    cin>>mini;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
            m[a[i][j]]++;
        }
    }
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if(itr->second>=mini)
        {
            cout<<itr->first<<" "<<itr->second<<endl;
            n.insert({itr->first,itr->second});
        }
    }
    

    return 0;
}
