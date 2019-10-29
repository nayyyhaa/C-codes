#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// Find the largest power of 2 which is less than or equal to the given Number N

ll lpow(ll N){
	//changing all right side bits to 1.
	N = N| (N>>1);
        N = N| (N>>2);
        N = N| (N>>4);
        N = N| (N>>8);
        N = N| (N>>16);
        
        //as now the number is 2 * x-1, where x is required answer, so adding 1 and dividing it by 2.
         return (N+1)>>1;
}

int main(){
	ll N;
	cin>>N;
	ll N1=N;
	cout<<"Largest power of 2 which is less than or equal to the given Number N : "<<lpow(N)<<"\n";
	
	// Retruns the rightmost 1 in binary representation of N
	int j=N1^(N1&(N1-1));
	cout<<"Rightmost 1 in binary representation of N is: "<<j<<"\n";
	
   return 0;
}


/* Sample Test Cases

	Input: 18
	Output: Largest power of 2 which is less than or equal to the given Number N : 16
		Rightmost 1 in binary representation of N is: 2
		
	Explaination:
	
	x=18=10010
	x-1=17=10001
	x&x-1=10000
	x^(x&(x-1))=00010
	
	Hence the rightmost 1 in binary representation of N is : 2
*/
	
	
*/	 
