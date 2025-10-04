#include <iostream>
#include "myfunc.h"   // gọi hàm từ file .h

using namespace std;

int main() {
    int kq = Cong(7, 5);
    cout << "Cong = " << kq << endl;

    int kq2 = Tru(7, 5);
    cout << "Tru = " << kq2 << endl;

    XinChao("nam");
    XinChao("nu");

    return 0;
}
