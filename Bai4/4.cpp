#include <iostream>
#include <climits>
#include <typeinfo> 

using namespace std;

int main() {
    cout << "MAX cua kieu int: " << INT_MAX << endl;
    cout << "MIN cua kieu int: " << INT_MIN << endl;
    
    //Khai bao
    int toan;
    float diemToan;
    double tienLuong;

    // khởi tạo;
    bool check = true;
    char kitu = 'a';
    int CanNang = 72;
    float diemVan = 9.5f;
    diemVan = 9.5;

    // Kiểm tra kiểu dữ liệu của biến.
    cout << typeid(check).name();
}