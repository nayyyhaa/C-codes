#include <iostream>
using namespace std;

void checkprime(int N) {
        int count = 0;
        for( int i = 1;i * i <=N;++i ) {
             if( N % i == 0) {
                 if( i * i == N )
                         count++;
                 else       // i < sqrt(N) and (N / i) > sqrt(N)
                         count += 2;
              }
        }
        if(count == 2)
            cout << N << " is a prime number." << endl;
        else
            cout << N << " is not a prime number." << endl;
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    checkprime(n);
    return 0;
}