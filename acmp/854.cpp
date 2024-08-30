#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    int t1, t2;
    cin >> t1 >> t2;
    string mode;
    cin >> mode;
    if(mode=="fan")
        cout << t1;
    else if(mode == "auto")
        cout << t2;
    else if(mode == "freeze")
    {
        if(t2<t1)
            cout << t2;
        else cout << t1;
    }
    else
    {
        if(t2<t1)
            cout << t1;
        else cout << t2;
    }

    return 0;
}