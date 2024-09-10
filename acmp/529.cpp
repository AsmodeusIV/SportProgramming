#include <cmath>
#include <iostream>
#include <iomanip>

#define ll long long

using namespace std;

int main() {
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << setprecision(10) << sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
    return 0;
}
