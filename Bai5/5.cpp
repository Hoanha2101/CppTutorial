#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    const int DOSOI = 100;
    const int DODONG = 0;
    int tuoi = 15;

    cout << "Nhiet do soi = " << DOSOI << endl;
    cout << "Nhiet do dong = " << DODONG << endl;

    int a = 8;
    double b = 7.5;
    cout << "a + b = " << a + b << endl;

    int kq = a + b;
    cout << "a + b = " << kq << endl;

    double kq2 = a + b;
    cout << "a + b = " << kq2 << endl;
}