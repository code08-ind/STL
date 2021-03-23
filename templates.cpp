#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T1, typename T2>
float minimum(T1 a, T2 b)
{
    return (a < b) ? a : b;
}

template <typename T3, typename T4>
void func(T3 a, T4 b)
{
    cout << a << " " << b << endl;
}

template <typename T>
void my_swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

struct Person
{
    string name;
    int age;
    bool operator>(const Person &rhs) const
    {
        return this->age > rhs.age;
    }
};

ostream &operator<<(ostream &os, const Person &p)
{
    os << p.name;
    return os;
}

int main()
{
    Person p1{"Curly", 29};
    Person p2{"James", 34};
    Person p3 = maximum(p1, p2);
    int x = 100;
    int y = 200;
    cout << x << "," << y << endl;
    my_swap(x, y);
    cout << x << "," << y << endl;
    func(p1, p2);
    cout << p3.name << " is elder" << endl;
    int a = 10;
    int b = 20;
    cout << "Maximum Is :" << endl;
    cout << maximum<int>(a, b) << endl;
    cout << "Minimum Is :" << endl;
    cout << minimum(30, 23.4) << endl;
    return 0;
}
