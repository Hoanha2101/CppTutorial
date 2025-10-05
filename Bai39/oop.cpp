#include <iostream>
#include <string>
using namespace std;

// 🧱 Lớp cơ sở (Base class): ConNguoi
class ConNguoi {
protected:
    string hoTen;
    int tuoi;

public:
    // Constructor
    ConNguoi(string ten, int t) : hoTen(ten), tuoi(t) {}

    // Hàm ảo (virtual) để thể hiện đa hình
    virtual void HienThiThongTin() {
        cout << "Ho ten: " << hoTen << ", Tuoi: " << tuoi << endl;
    }

    // Destructor ảo (quan trọng khi kế thừa)
    virtual ~ConNguoi() {}
};

// 🌳 Lớp dẫn xuất (Derived class): SinhVien kế thừa ConNguoi
class SinhVien : public ConNguoi {
private:
    string maSV;
    float diemTB;

public:
    SinhVien(string ten, int t, string ma, float diem)
        : ConNguoi(ten, t), maSV(ma), diemTB(diem) {}

    void HienThiThongTin() override { // Ghi đè (Overriding)
        cout << "[Sinh Vien] " << hoTen << " - Ma SV: " << maSV
             << ", Tuoi: " << tuoi << ", Diem TB: " << diemTB << endl;
    }
};

// 🌳 Lớp dẫn xuất khác: GiangVien kế thừa ConNguoi
class GiangVien : public ConNguoi {
private:
    string maGV;
    string monDay;

public:
    GiangVien(string ten, int t, string ma, string mon)
        : ConNguoi(ten, t), maGV(ma), monDay(mon) {}

    void HienThiThongTin() override {
        cout << "[Giang Vien] " << hoTen << " - Ma GV: " << maGV
             << ", Tuoi: " << tuoi << ", Mon day: " << monDay << endl;
    }
};

// 🌀 Hàm main thể hiện tính đa hình
int main() {
    ConNguoi* ds[2]; // Mảng con trỏ kiểu lớp cha

    ds[0] = new SinhVien("Ha Khai Hoan", 21, "SV001", 8.9);
    ds[1] = new GiangVien("Nguyen Van A", 40, "GV001", "Lap trinh C++");

    cout << "=== Danh sach thong tin ===" << endl;
    for (int i = 0; i < 2; i++) {
        ds[i]->HienThiThongTin(); // Gọi hàm phù hợp dựa vào kiểu thực tế
    }

    // Giải phóng bộ nhớ
    for (int i = 0; i < 2; i++) delete ds[i];

    return 0;
}
