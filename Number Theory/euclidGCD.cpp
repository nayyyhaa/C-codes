#include <iostream>
using namespace std;

int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
int main()
{
    int a,b;
    cout << "Enter two positive integer: ";
    cin >> a>>b;
    cout << "GCD of " << a<<","<<b << " = " << GCD(a,b) << "\n";    
    return 0;
}
