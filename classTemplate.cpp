#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Item
{
private:
    T value;
    string name;

public:
    Item(string name, T value) : name{name}, value{value}
    {
    }
    string getName() const
    {
        return name;
    }
    T getValue() const
    {
        return value;
    }
};

template <typename T1, typename T2>
struct My_Pair
{
    T1 first;
    T2 second;
};

int main()
{
    Item<int> item1{"Larry", 12};
    Item<string> item2{"Larry", "Garry"};
    Item<Item<string>> item3{"Larry", {"Garry", "Harry"}};
    cout << item1.getName() << " " << item1.getValue() << endl;
    cout << item2.getName() << " " << item2.getValue() << endl;
    cout << item3.getName() << " " << item3.getValue().getName() << " " << item3.getValue().getValue() << endl;
    // Item<double> item1('Larry', 12.02);
    // vector<Item<int>> vec;
    cout << "===========================================================================" << endl;
    vector<Item<double>> vec{};
    vec.push_back(Item<double>("Larry", 12.0));
    vec.push_back(Item<double>("Marry", 13.4));
    vec.push_back(Item<double>("Harry", 12.9));
    for (const auto &item : vec)
    {
        cout << item.getName() << " " << item.getValue() << endl;
    }

    cout << "===========================================================================" << endl;

    My_Pair<string, int> p1{"Frank", 34};
    My_Pair<string, string> p2{"Franklin", "Gothlin"};
    My_Pair<int, double> p3{56, 67.78};

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first << " " << p3.second << endl;

    return 0;
}
