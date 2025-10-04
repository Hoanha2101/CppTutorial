#include <iostream>
using namespace std;

int main() {
    const int dong = 3;
    const int cot  = 4;

    // Bước 1: Cấp phát mảng con trỏ (mỗi phần tử là int*)
    int** capHai = new int*[dong];

    // Bước 2: Với mỗi dòng -> cấp phát một mảng int
    for (int i = 0; i < dong; i++) {
        *(capHai + i) = new int[cot];   // tường minh: capHai[i] = new int[cot];
    }

    // Bước 3: Gán giá trị cho từng phần tử
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            *(*(capHai + i) + j) = i * cot + j; // tường minh: capHai[i][j] = ...
        }
    }

    // Bước 4: Xuất giá trị từng phần tử
    cout << "Gia tri trong mang 2 chieu:\n";
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            cout << *(*(capHai + i) + j) << " "; // tường minh: capHai[i][j]
        }
        cout << endl;
    }

    // Bước 5: Xuất địa chỉ của từng phần tử
    cout << "\nDia chi tung phan tu:\n";
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            cout << (*(capHai + i) + j) << " ";  // tường minh: &capHai[i][j]
        }
        cout << endl;
    }

    // Bước 6: Giải phóng bộ nhớ
    for (int i = 0; i < dong; i++) {
        delete[] *(capHai + i);  // tường minh: delete[] capHai[i];
    }
    delete[] capHai;

    return 0;
}
