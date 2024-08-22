#include <iostream>
#include <vector>
#include  <algorithm>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> days(n);
    for(int& i: days)
    {
        cin >> i;
    }
    int countOdd = 0, countEven = 0;
    for(int i = 0; i < n; i++)
    {
        if(days[i]%2==1)
        {
            cout << days[i] << " ";
            countOdd++;
        }
    }
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        if(days[i]%2==0)
        {
            cout << days[i] << " ";
            countEven++;
        }
    }
    cout << endl;
    if(countEven >= countOdd) cout << "YES";
    else cout << "NO";
    return 0;
}
