#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N = 30;
    vector<bool> is_prime(N + 1, true);

    for (int i = 2; i * i <= N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i + i; j <= N; j = j + i)
            {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i < is_prime.size(); i++)
    {
        if (is_prime[i])
            cout << i << endl;
    }
}
