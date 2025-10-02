#include <iostream>

using namespace std;

int main()
{
    // 1. ép rộng
    short a = 10;
    cout << "a = " << a << endl;
    int b;
    b = a; // ép tắt trong C++
    // hoặc
    b = (int)a; // ép tường minh
    cout << "b = " << b << endl;

    // 2. ép hẹp
    float soA = 1.25f;
    int soB;
    soB = soA;

    cout << "soA = " << soA << endl;
    cout << "soB = " << soB << endl;
}