#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Hay nhap n = ";
    cin >> n;
    cout << "\n";

    string m = ((n % 2) == 0) ? "chan" : "le";
    cout << "n la so: " << m << endl;
}