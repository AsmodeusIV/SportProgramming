#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    int x, s1 = 0, s2 = 0;
    cin >> x;
    for(int i = 0; i < 3; i++)
    {
        s1 += x%10;
        x/=10;
    }
    for(int i = 0; i < 3; i++)
    {
        s2 += x%10;
        x/=10;
    }
    if(s1==s2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
