#include <iostream>

using namespace std;

int main() {
    int M[3]; //Mảng nguyên M có 3 phần từ
    string M2[7]; //Mảng string M2 có 7 phần tử

    int M3[] = {1, 2, 3, 4, 5, 6};
    string M4[] = {"mot", "hai", "ba", "bon"};

    cout << "M4[3] = " << M4[3] << endl;
    // cout << "M4[4] = " << M4[4] << endl; // Vượt quá index -> ko có

    // Kiểm tra chiều dài mảng
    int M5[] = {1, 2, 3, 4, 5};
    int len = sizeof(M5) / sizeof(M5[0]);
    cout << "CHIEU DAI CUA M5 = " << len << endl;

    //Duyệt mảng 
    for (int pt : M5) {
        cout << pt << " ";
    }

    cout << endl;

    for (int i = 0; i < len; i++) {
        cout << i << " ";
    };
    cout << endl;

    // thay đổi giá trị cho mảng

    cout << "Gia trị của M5 tại vị trí 2 = " << M5[2] << endl;

    M5[2] = 100;

    cout << "Gia trị của M5 tại vị trí 2 sau khi đổi = " << M5[2] << endl;

}