#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Bai tap 1:";
    cout <<"PI: "<< M_PI << endl;
    cout <<"Hay nhap vao ban kinh cua hanh tron voi r = ";
    float r;
    cin >> r;

    cout << "Chu vi cua hinh tron: " << 2*M_PI*r << endl;
    cout << "Dien tich cua hinh tron: " << M_PI*r*r << endl;

    cout << "\n";
    cout << "Bai tap 2:" << endl;
    float a, b;
    cout << "Hay nhap vao chieu dai a = ";
    cin >> a;
    cout << "Hay nhap vao chieu dai a = ";
    cin >> b;

    cout << "Chu vi cua hinh chu nhat: " << (a + b)*2 << endl;
    cout << "Dien tich cua hinh chu nhat: " << a*b << endl;

    cout << "\n";

    cout << "Bai tap 3:" << endl;

    float c = 9.12345678;

    cout << "a sau khi lam tron: " << setprecision(3) << c << endl;
}