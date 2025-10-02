#include <iostream>

using namespace std;

int main() {
    int i = 7;
    cout << (i > 0 && i < 10) << endl;

    i = -7;
    cout << (i > 0 && i < 10) << endl;
    cout << (i > 0 || i < 10) << endl;

    cout << "\n";

    int a = 99;
    int b = 10;
    int c = 77;
    int d = 88;

    a++;
    b--;
    ++c;
    --d;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    
}