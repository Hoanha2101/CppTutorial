#include <iostream>
#include <cstring>
using namespace std;

struct Book
{
    char tieuDe[100];
    char tacgia[100];
    float giasach;
};


int main() {
    Book quyen1;
    cout << "Moi cu nha vao ten sach: ";
    gets(quyen1.tieuDe);
    cout << endl;
    cout << "Moi cu nha vao ten tacgia: ";
    gets(quyen1.tacgia);
    cout << endl;
    cout << "Moi cu nha vao gia sach: ";
    cin >> quyen1.giasach;

    cout << endl;

    //Sao chép thông tin đổi tượng quyển 1 cho quyển 2
    Book quyen2 = quyen1; // sao chép, và mỗi thằng quản lý 1 ô nhớ riêng

    cout << "Thong tin quyen 2: "<< endl;
    cout << "Ten sach: " << quyen2.tieuDe << endl;
    cout << "Ten tac gia: " << quyen2.tacgia << endl;
    cout << "Gia sach: " << quyen2.giasach << endl;

}