#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main()
{
    vector<int> primes;
    vector<int> nums(100100, 1);
    nums[2] = 1;
    for(int i = 2; i < nums.size(); i++)
    {
        if(nums[i]==1) {
            primes.push_back(i);
            for(int j = 2*i; j < 100100; j+=i)
                nums[j]=0;
        }
    }
    int n;
    cin >> n;
    int ans = 0;
    for(int& i: primes)
        if(i<2*n && i>n)
            ans++;
    cout << ans;
    return 0;
}
