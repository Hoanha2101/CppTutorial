#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    char chuoi1[] = "Ha Khai Hoan";
    char chuoi2[20];
    strcpy(chuoi2, chuoi1);

    cout << chuoi1 << endl;  // Ha Khai Hoan
    cout << chuoi2 << endl;  // Ha Khai Hoan

    string chuoi3 = "Ha Khai Hoan";
    string chuoi4 = chuoi3; 

    cout << chuoi3 << endl;  // Ha Khai Hoan
    cout << chuoi4 << endl;  // Ha Khai Hoan

    strncpy(chuoi2, chuoi1, 3);  // Copy 3 ký tự đầu
    chuoi2[3] = '\0';            // Thêm ký tự kết thúc

    cout << chuoi1 << endl;  // Ha Khai Hoan
    cout << chuoi2 << endl;  // Ha 
}
