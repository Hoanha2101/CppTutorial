#include <iostream>
#include <cstring>
using namespace std;

struct Diachi {
    char SoNha[25];
    char TenDuong[250];
    char TinhThanh[25];
};

struct SinhVien {
    char MaSV[10];
    char TenSV[250];
    bool GioiTinh;
    Diachi DiaChiNha;
    Diachi DiaChiTruong;
};

int main() {
    SinhVien sv1 = {
        "01",                                  // MaSV
        "Hoan",                                // TenSV
        true,                                  // GioiTinh
        {"100", "Nguyen Chi Thanh", "Binh Dinh"}, // DiaChiNha
        {"100", "Nguyen Chi Thanh", "Binh Dinh"}  // DiaChiTruong
    };

    cout << "Ma SV: " << sv1.MaSV << endl;
    cout << "Ten SV: " << sv1.TenSV << endl;
    cout << "Dia chi nha: " << sv1.DiaChiNha.TenDuong << ", " << sv1.DiaChiNha.TinhThanh << endl;

    cout << endl;

    SinhVien sv2;
    
    cout << "Ma SV: " << sv2.MaSV << endl;
    cout << "Ten SV: " << sv2.TenSV << endl;
    cout << "Dia chi nha: " << sv2.DiaChiNha.TenDuong << ", " << sv2.DiaChiNha.TinhThanh << endl;

    cout << endl;

    strcpy(sv2.MaSV, "02");
    cout << "Ma SV: " << sv2.MaSV << endl;

}
