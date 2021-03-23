#include <iostream>
#include <bits/stdc++.h>
#include <vector>
// #include <set>
#include <algorithm>
using namespace std;

int main()
{
    // vector<int> vec1{1, 2, 3};
    // vector<int>::iterator it = vec1.begin();
    // // while (it != vec1.end())
    // // {
    // //     cout << *it << " ";
    // //     it++;
    // // }
    // for (auto it = vec1.begin(); it != vec1.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // std::set<char> set1{'a', 'b', 'c', 'd', 'e', 'f'};
    // auto it = set1.begin();
    // while (it != set1.end())
    // {
    //     cout << *it << " ";
    //     ++it;
    // }

    vector<int> vec{1, 2, 3, 4};
    vector<int>::reverse_iterator it = vec.rbegin();
    while (it != vec.rend())
    {
        cout << *it << " ";
        it++;
        // it--;
    }
    return 0;
}