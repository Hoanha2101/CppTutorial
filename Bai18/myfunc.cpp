#include <iostream>
#include "myfunc.h"   // include header vào

using namespace std;

int Cong(int x, int y){
    return x + y;
}

int Tru(int x, int y){
    return x - y;
}

void XinChao(string gioiTinh) {
    if (gioiTinh == "nu"){
        cout << "XIN CHAO, TOI LA NHAN VIEN NU! \n";
    } 
    else if (gioiTinh == "nam"){
        cout << "XIN CHAO, TOI LA NHAN VIEN NAM! \n";
    }
}
