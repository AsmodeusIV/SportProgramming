#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i<=n; i++)
        if(n%i==0)
            sum+=i;
    cout << sum;
    return 0;
}
