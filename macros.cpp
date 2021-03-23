#include <iostream>
using namespace std;

// #define MAX(a, b) ((a > b) ? a : b)
#define SQUARE(a) ((a) * (a))

int main()
{
    int i = 100;
    // cout << MAX(23, 45) << endl;
    // cout << MAX(2.3, 4.5) << endl;
    // cout << MAX('T', 'U') << endl;
    cout << SQUARE(5) << endl;
    cout << i / SQUARE(5) << endl;
    return 0;
}