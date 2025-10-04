#include <iostream>

using namespace std;

// hàm truyền tham trị
void ThamTri(int a){
    a = 100;
    cout << "Gia tri cua a = " << a << endl;
};

// hàm truyền tham chiếu / truyền tham biến
void ThamChieu(int &a){
    a = 100;
    cout << "Gia tri cua a = " << a << endl;
};

int main() {
    int a = 1;
    cout << "Gia tri cua a = " << a << endl;
    ThamTri(a);
    cout << "Gia tri cua a = " << a << endl;

    ThamChieu(a);
    cout << "Gia tri cua a = " << a << endl;

}