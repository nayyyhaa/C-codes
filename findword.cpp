//find the word with maximum length and even letters from a sentence
#include<bits/stdc++.h>
using namespace std;
int main() 
{ 
    string s,a;
    char ch;
    int len,mlen=0;
    getline(cin,s);
    char* token=strtok(&s[0]," ");
    string r;
    while(token!=NULL)
    {
        r=token;
        len=r.size();
        if(mlen<len&&len%2==0)
        {
            mlen=len;
            a=token;
        }
        token = strtok(NULL, " ");
    }
    cout<<a;
    return 0;
} 