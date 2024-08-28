#include <iostream>
#include <iomanip>

#define ll long long

using namespace std;

int main()
{
    int bik = 0, cow = 0;
    string s, s1;
    cin >> s >> s1;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(i == j && s[i]==s1[j])
                bik++;
            else if(s[i]==s1[j])
                cow++;
        }
    }
    cout << bik << " " << cow;
    return 0;
}
