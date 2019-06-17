#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m;
         map<char, int>::iterator it ;
        int value=0,temp,x=0;
        m.insert( pair<char, int>('I', 1) ); 
        m.insert( pair<char, int>('V', 5) ); 
        m.insert( pair<char, int>('X', 10) ); 
        m.insert( pair<char, int>('L', 50) ); 
        m.insert( pair<char, int>('C', 100) ); 
        m.insert( pair<char, int>('D', 500) ); 
        m.insert( pair<char, int>('M', 1000) );
        for(int i=0;i<s.length();i++)
        {
            temp=m.find(s[i])->second;
            value=value+temp;
            if(x<temp)
                value=value-(2*x);
            x=temp;
        }            
        return value;
    }
};
int main()
{
    Solution s;
    int sol;
    sol=s.romanToInt("MCMXCIV");
    cout<<sol;
    return 0;
}
