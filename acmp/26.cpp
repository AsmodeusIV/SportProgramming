#include <iostream>
#include <cmath>
#define ll long long

using namespace std;

double dist(int x1, int y1, int x2, int y2)
{
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main()
{
    int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    if(dist(x1,y1,x2,y2)<=r1+r2 && dist(x1,y1,x2,y2)>= abs(r1-r2))
        cout << "YES";
    else
        cout << "NO";

}
