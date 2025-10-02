// #include <iostream>
// #include <io.h>
// #include <fcntl.h>

// using namespace std;

// int main() {
//     // Thiết lập console ở chế độ UTF-16
//     _setmode(_fileno(stdin), _O_U16TEXT);
//     _setmode(_fileno(stdout), _O_U16TEXT);

//     // Xuất dữ liệu Unicode
//     wcout << L"Xin chào mọi người \n";
//     wcout << L"Tôi là Hà Khải Hoàn \n";

//     // Nhập dữ liệu từ bàn phím
//     double toan, van, tb;
//     wcout << L"Mời nhập vào điểm Toán: ";
//     wcin >> toan;

//     wcout << L"Mời nhập vào điểm Văn: ";
//     wcin >> van;

//     // Tính trung bình
//     tb = (toan + van) / 2;
//     wcout << L"Điểm trung bình của bạn là: " << tb << endl;
// }

#include <iostream>
#include <io.h>
#include <fcntl.h>

using namespace std;

int main()
{
#ifdef _WIN32
// Nếu đang compile bằng MSVC thì có sẵn _O_U16TEXT
// Nếu dùng MinGW thì ta định nghĩa thủ công
#ifndef _O_U16TEXT
#define _O_U16TEXT 0x20000
#endif
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
#endif

    // Xuất dữ liệu
    wcout << L"hello everyone \n";
    wcout << L"Tôi là Hà Khải Hoàn \n";

    // Nhập dữ liệu từ bàn phím
    double toan, van, tb;
    wcout << L"Mời nhập vào điểm Toán: ";
    wcin >> toan;

    wcout << L"Mời nhập vào điểm Văn: ";
    wcin >> van;

    // Tính trung bình
    tb = (toan + van) / 2;
    wcout << L"Điểm trung bình của bạn là: " << tb << endl;

    return 0;
}
