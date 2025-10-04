#include <iostream>
#include <random>

using namespace std;

// hàm nhập mảng
// Cần thêm dấu & vì có thay đổi giá trị của biến sau khi thoát hàm,
// biến global ấy - tham trị

void Nhap(int *&M, int n)
{
    M = new int[n];
    // duyệt từng phần tử của mảng
    //  gán giá chiếu ngẫu nhiên
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 100);

    for (int i = 0; i < n; i++)
    {
        // SỬ dụng con trỏ
        *(M + i) = dis(gen); // Gán giá trị cho vị trí con trỏ
    }
}

void Xuat(int *M, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(M + i) << " ";
    }
}

void Hoandoi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SapXep(int *&M, int n)
{
    // chạy 2 vòng for để so sánh số trước và số sau
    // thuật toán sắp xếp nổi bọt (bubble sort)

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // cout << i << " - " << j << "\t";
            if (*(M + i) < *(M + j))
            {
                Hoandoi(M + i, M + j);
            }
        };
        // cout << endl;
    };
}

int main()
{
    /*
    1. Viết chương trình nhập vào một mảng 1 chiều M,
        gồm n phần tử nguyên ngẫu nhiên [0,100].
    2. Sắp xếp mảnh M theo chiều giảm dần, lưu ý:
        yêu cầu sử dụng tên mảng như con trỏ và sử dụng con trỏ
    */

    int *M;
    int n = 10;
    Nhap(M, n);
    cout << "Mang ngau nhien vua tao ra la: " << endl;
    Xuat(M, n);
    cout << endl;

    SapXep(M, n);
    cout << endl;

    Xuat(M, n);

    delete[] M;
}