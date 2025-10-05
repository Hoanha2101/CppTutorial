#include <iostream>
#include <cstring>
using namespace std;

struct SinhVien
{
    int ma;
    char ten[255];
};

int main() {

    // SinhVien* controSInhVien;
    // controSInhVien = new SinhVien;

    SinhVien* controSInhVien = new SinhVien;

    (*controSInhVien).ma = 1; // gán số trực tiếp
    strcpy((*controSInhVien).ten, "Hoan"); // copy chuỗi vào 'ten'

    cout << "Ma: " << (*controSInhVien).ma << endl;
    cout << "Ten: " << (*controSInhVien).ten << endl;
    
    cout << endl;

    //cách truy cập khác 
    cout << "Ma: " << controSInhVien->ma << endl;
    cout << "Ten: " << controSInhVien->ten << endl;

    cout << endl;

    // Trỏ con trỏ đến cùng nhớ của đối tượng khác -> thay đổi bên này thì bên kia cũng thay đổi 
    // luôn vì dùng chung 1 vùng nhớ mà
    SinhVien* psv3;
    psv3 = &(*controSInhVien);

    cout << "Ma: " << psv3->ma << endl;
    cout << "Ten: " << psv3->ten << endl;

    cout << endl;

    (*psv3).ma = 2; // gán số trực tiếp
    strcpy((*psv3).ten, "Kinh"); // copy chuỗi vào 'ten'

    cout << "Ma: " << controSInhVien->ma << "....." << psv3->ma << endl;
    cout << "Ten: " << controSInhVien->ten << "....." << psv3->ten << endl;
}