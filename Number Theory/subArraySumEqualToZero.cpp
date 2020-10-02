#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    int k;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cin >> k;
    // Stores cumulative sum counter
    unordered_map<int, int> sumFreq{{0, 1}};

    int sum = 0;
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        // prefix sum
        sum += array[i];
        // subarray sum k is possible for current prefix sum if sum-k exists
        if (sumFreq.count(sum - k))
            counter += sumFreq[sum - k];
        // update current prefix sum frequency/counter
        sumFreq[sum]++;
    }
    cout << counter;
}
