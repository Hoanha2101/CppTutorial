#include <iostream>

using namespace std;

int main() {
    float dtb;
    cout << "Moi nhap vao diem trung binh: ";
    cin >> dtb;

    if (dtb >= 5.0)
    {
        cout << "Ban da do" << endl;
    }
    else
    {
        cout << "Ban da truot" << endl;
    };

    double diem;
    cout << "Moi nhap vao diem trung binh: ";
    cin >> dtb;

    if (diem <= 10 && diem >= 8)
    {
        cout << "Hoc sinh gioi" << endl;
    }
    else if (diem < 8 && diem >= 6.5)
    {
        cout << "Hoc sinh kha" << endl;
    }
    else if (diem < 6.5 && diem >= 5)
    {
        cout << "Hoc sinh trung binh" << endl;
    }
    else
    {
        cout << "Hoc sinh yeu" << endl;
    }
}