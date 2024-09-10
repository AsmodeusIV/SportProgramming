#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    cin >>x;
    if(x==0){
        cout << "NO";
        return 0;
}
    while(x%2==0)
        x/=2;
    if(x==1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}