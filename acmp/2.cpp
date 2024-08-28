#include <iostream>

using namespace std;

int main()
{
    long long a;

    cin >> a;

    if(a>0)
    cout << a*(a+1)/2;
    else if(a==0)
    cout<<1;
    else
    {
        cout<< -(a*(a-1)/2)+1;
    }
}
