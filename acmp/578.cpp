#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;


int main() {
    int n;
    cin >> n;
    
    string res = "";
    
    while (n) {
        int rem = n % 3;
        n /= 3;

        if (rem == 0) {
            n -= 1;
            rem = 3;
        }

        res += to_string(rem);
    }

    reverse(res.begin(), res.end());
    
    cout << res;

    return 0;
}