#include <iostream>

using namespace std;

int GiaThua(int n) {
    if (n <= 1) {
        return 1;
    };
    return n*GiaThua(n - 1);
}


int fibonaci (int n) {
    if (n <= 2) {
        return 1;
    }
    return fibonaci(n - 1) + fibonaci(n -2);
}

int main() {
    int kq = GiaThua(4);
    cout << "kq = " << kq << endl;

    int fibo = fibonaci(14);
    cout << "fibo = " << fibo << endl;
}