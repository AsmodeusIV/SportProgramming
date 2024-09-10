#include <cmath>
#include <iostream>
#include <iomanip>

#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i<500000; i++) {
        if(i*(i+1)/2<=n)
            ans = i;
        else
            break;
    }
    cout << ans;
    return 0;
}
