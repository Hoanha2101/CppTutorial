#include <iostream>
#include <limits> // cần để dùng numeric_limits<streamsize>::max()

using namespace std;

int main() {
    // --- CẤU HÌNH ---
    // "max" là kích thước bộ đệm chuỗi, bao gồm cả ký tự kết thúc '\0'.
    // Nếu bạn muốn nhập tối đa 9 ký tự thì max = 10.
    const int max = 10;

    // Cách 1: mảng char trên stack (kích thước cố định)
    char chuoi[max];

    cout << "moi ban nhap ki tu: ";

    // getline(char* s, streamsize n) đọc tối đa n-1 ký tự, rồi thêm '\0'.
    // Nếu người dùng nhập nhiều hơn n-1 ký tự, hàm sẽ đọc n-1 ký tự,
    // đặt '\0', và trạng thái stream sẽ bị failbit (còn ký tự thừa ở trong buffer).
    cin.getline(chuoi, max);

    cout << "chuoi vua nhap: " << chuoi << endl;

    // --- XỬ LÝ TRẠNG THÁI STREAM VÀ BỘ ĐỆM NHẬP ---
    // Nếu trước đó input quá dài (vượt max-1), failbit sẽ được set.
    // cin.clear() xóa các cờ lỗi (failbit, eofbit, v.v.) để stream có thể dùng tiếp.
    cin.clear();

    // cin.ignore(...) bỏ qua phần còn lại trong bộ đệm input.
    // numeric_limits<streamsize>::max() là một số rất lớn để đảm bảo, có thể nhập một số nào đó cũng được
    // chúng ta bỏ qua **tất cả** ký tự còn lại đến khi gặp ký tự '\n'.
    // LƯU Ý: tham số thứ 2 phải là ký tự (ví dụ '\n'), **không** phải chuỗi "\n".
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << endl;

    // ------------------------------------------------
    // Cách 2: cấp phát mảng char động trên heap (phù hợp khi kích thước cần biết lúc chạy)
    char* chuoi2 = new char[max]; // cần delete[] sau khi dùng

    cout << "moi ban nhap ki tu: ";
    // tương tự: đọc tối đa max-1 ký tự, lưu '\0'
    cin.getline(chuoi2, max);
    cout << "chuoi vua nhap: " << chuoi2 << endl;

    // Giải phóng bộ nhớ heap để tránh rò rỉ bộ nhớ
    delete[] chuoi2;

    return 0;
}
