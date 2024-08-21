#include <iostream>
#include <cmath>
#define ll long long

using namespace std;

int main()
{
    int x, count1 = 0;
    cin >> x;
    while(x!=0)
    {
        if(x%2!=0)
            count1++;
        x/=2;
    }
    cout << count1;

}
