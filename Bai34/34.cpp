#include <iostream>

using namespace std;

struct Diachi
{   
    //Khai báo các biến thành viên - Thuộc tính
    char SoNha[25];
    char TenDuong[250];
    char TinhThanh[25];
};

struct SinhVien
{
    // Biến thành viên, thuộc tính
    char MaSV[10];
    char TenSV[250];
    bool GioiTinh;
    Diachi DiaChiNha;
    Diachi DiaChiTruong;
} sv1, sv2; //biến cấu trúc (Đối tượng)

int main() {

}