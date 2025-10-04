#include <iostream>

using namespace std;

void hoanDoi(double* a, double* b){
    double temp = *a;
    cout << *a << "-" << *b << endl;
    *a = *b;
    *b = temp;
}

int main() {
    // B1: Viết hàm hoán vị 2 biến a,b là số thực bằng các sử dụng con trỏ
    // B2: Viết chương trình nhập 2 số thực a,b. Sử dụng hàm trên để đổi chỗ a,b
    double a, b;
    cout << "nhap a: ";
    cin >> a;

    cout << endl;

    cout << "nhap b: ";
    cin >> b;

    cout << "gia tri a, b truoc hoan doi " << a << "...." << b << endl;

    hoanDoi(&a, &b);

    cout << "gia tri a, b sau hoan doi " << a << "...." << b << endl;
    
}