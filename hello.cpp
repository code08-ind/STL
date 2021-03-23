#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{2, 42, 1};
    int sum{};
    // sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());
    sum = accumulate(v.begin(), v.end(), 0);
    // for (auto element : v)
    // {
    //     cout << element << endl;
    // }
    // cout << endl;
    cout << sum;
    return 0;
}