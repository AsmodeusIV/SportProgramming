#include <iostream>
#include <vector>
#include <unordered_set>

#define ll long long

using namespace std;

int countMerge(vector<int> a, vector<int> b)
{
    unordered_set<int> setB(b.begin(), b.end());
    int count = 0;

    for(int &i: a)
    {
        if(setB.count(i)) {
            count++;
        }
    }

    return count;
}

vector<int> takeVar(char c)
{
    if(c == '?')
        return {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    if(c >= '0' && c <= '9')
        return {c - '0'};
    if(c == 'a')
        return {0, 1, 2, 3};
    if(c == 'b')
        return {1, 2, 3, 4};
    if(c == 'c')
        return {5, 4, 3, 2};
    if(c == 'd')
        return {6, 5, 4, 3};
    if(c == 'e')
        return {7, 6, 5, 4};
    if(c == 'f')
        return {8, 7, 6, 5};
    if(c == 'g')
        return {9, 8, 7, 6};

}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    ll p = 1; // Используем long long для предотвращения переполнения
    for(int i = 0; i < s1.size(); i++)
    {
        p *= countMerge(takeVar(s1[i]), takeVar(s2[i]));
    }

    cout << p << endl;
    return 0;
}
