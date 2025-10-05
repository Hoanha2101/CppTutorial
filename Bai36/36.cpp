#include <iostream>
#include <cstring>
using namespace std;

struct SinhVien
{
    int ma;
    char ten[255];
};

void NhapMang(SinhVien ds[], int total) {
    for (int i = 0; i < total; i++)
    {
        cout << "Nhap thong tin cua sinh vien thu " << i + 1 << endl;
        cout << "Nhap ma: ";
        cin >> ds[i].ma;
        cin.ignore();
        cout << "Nhap ten: ";
        cin.getline(ds[i].ten, sizeof(ds[i].ten));

    }
    
}

void XuatMang(SinhVien ds[], int total){
    for (int i = 0; i < total; i++)
    {
        cout << "Thong tin cua sinh vien thu " << i + 1 << endl;
        cout << "Ma: " << ds[i].ma << endl;
        cout << "Ten: " << ds[i].ten << endl;
        cout << endl;
    }
}

int main() {

    //Khởi tạo mảng với kiểu dữ liệu cơ bản C++
    int mang1[15];

    //Khai báo mảng với cấu trúc
    SinhVien mang2[15];

    NhapMang(mang2, 3);
    cout << endl;
    XuatMang(mang2, 3);
    cout << endl;

}