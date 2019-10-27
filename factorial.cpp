#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}

int main()
{
    unsigned int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n) << "\n";    
    return 0;
}
