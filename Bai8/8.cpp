#include <iostream>

using namespace std;

int main() {{
    int x1 = 8;
    x1 += 5;
    cout << "x1 = " << x1 << endl;

    int x2 = 8;
    x2 -= 5;
    cout << "x2 = " << x2 << endl;

    int x3 = 8;
    x3 *= 5;
    cout << "x3 = " << x3 << endl;

    int x4 = 8;
    x4 /= 5;
    cout << "x4 = " << x4 << endl;

    int x5 = 8;
    x5 %= 5;
    cout << "x5 = " << x5 << endl;

    int a = 1;
    int b = 2;

    cout << "\n";

    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a == b) << endl;
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;
    cout << (a != b) << endl;

}}