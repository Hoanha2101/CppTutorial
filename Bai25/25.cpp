#include <iostream>

using namespace std;

int main()
{
    int mang[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int *contro;
    contro = mang;

    // duyệt qua con trỏ
    for (int i = 0; i < sizeof(mang) / sizeof(mang[0]); i++)
    {
        cout << (contro + i) << "-" << *(contro + i) << endl;
    };
    cout << endl;
    // thay đổi giá trị của mảng bằng cách dùng con trỏ
    *(contro + 2) = 100;
    for (int i = 0; i < sizeof(mang) / sizeof(mang[0]); i++)
    {
        cout << (contro + i) << "-" << *(contro + i) << endl;
    };

    cout << endl;

    // khaibao mang con trỏ
    int *pointer[4];
    ///// Cấp phát bộ nhớ
    for (int i = 0; i < sizeof(pointer) / sizeof(pointer[0]); i++)
    {
        pointer[i] = new int;
    };

    //// Xuất giá trị địa chỉ bộ nhớ
    for (int i = 0; i < sizeof(pointer) / sizeof(pointer[0]); i++)
    {
        cout << pointer[i] << " ";
    };

    cout << endl;
    /// gán giá trị
    /// check ban đầu là các giá trị ảo ngẫu nhiên của vùng nhớ
    for (int i = 0; i < sizeof(pointer) / sizeof(pointer[0]); i++)
    {
        cout << *pointer[i] << " ";
    };
    cout << endl;
    /// gán nè
    for (int i = 0; i < sizeof(pointer) / sizeof(pointer[0]); i++)
    {
        *pointer[i] = i * 100;
    };
    cout << endl;
    /// check sau khi gán nè
    for (int i = 0; i < sizeof(pointer) / sizeof(pointer[0]); i++)
    {
        cout << *pointer[i] << " ";
    };
}