#include <iostream>

using namespace std;

int main() {
    int x1,y1,x2,y2;

    cin >> x1 >> y1 >> x2 >> y2;

    int xa,ya;

    cin >> xa >> ya;

    if(x1==x2)
    {
        xa = x1 - (xa-x1);
    }
    else
    {
        ya = y1 - (ya-y1);
    }

    cout << xa << " " << ya;
    return 0;
}
