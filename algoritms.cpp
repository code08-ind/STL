#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// struct Square_Functor
// {
//     void operator(int x)
//     {
//         cout << x * x << " " << endl;
//     }
// }

// void squares(int x)
// {
//     cout << x * x << " ";
// }

int main()
{
    // vector<int> vec{1, 2, 3};
    // vector<int>::iterator loc = find(vec.begin(), vec.end(), 3);
    // if (loc != vec.end())
    // {
    //     cout << *loc << " " << endl;
    // }

    // Square_Functor square;
    vector<int> vec{1, 2, 3, 4, 8};
    // std::for_each(vec.begin(), vec.end(), squares);
    std::for_each(vec.begin(), vec.end(),
                  [](int x) { cout << x * x << " "; });
    return 0;
}