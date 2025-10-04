#include <iostream>

using namespace std;

int Cong(int x, int y){
    return x + y;
};

int Tru(int x, int y);

void XinChao(string gioiTinh) {
    if (gioiTinh == "nu"){
        cout << "XIN CHAO, TOI LA NHAN VIEN NU! \n";
    } 
    else if (gioiTinh == "nam"){
        cout << "XIN CHAO, TOI LA NHAN VIEN Nam! \n";
    };
};

/// Main
int main() {
    int kq = Cong(7,5);
    cout << "kt = " << kq << endl;

    int kq2 = Tru(7,5);
    cout << "kt = " << kq2 << endl;

    XinChao("nam");
    XinChao("nu");
};

int Tru (int x, int y){
    return x - y;
};