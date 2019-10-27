#include <bits/stdc++.h>
using namespace std;

bool checkRight(int a, int b, int c){
    if(a*a + b*b == c*c)
        return true;
    return false;
}

int main(){
    int a,b,c;

    cout<<"Enter 1st number"<<endl;
    cin>>a;
    cout<<"Enter 2nd number"<<endl;
    cin>>b;
    cout<<"Enter 3rd number"<<endl;
    cin>>c;

    if(checkRight(a,b,c)||checkRight(b,c,a)||checkRight(c,a,b))
        cout<<"Yes, it is a right triangle"<<endl;
    else
        cout<<"No, it is not a right triangle"<<endl;

    return 0;
}
