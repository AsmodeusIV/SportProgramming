#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double salary;
    vector<double> money(n);
    for(double& i:money)
        cin >>i;
    
    cin >> salary;
    
    sort(money.begin(),money.end());
    
    for(double& i: money)
        if(i>salary)
        salary = (i+salary)/2;
    
    printf("%0.6lf", salary);
    
    return 0;
}