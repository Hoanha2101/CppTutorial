#include <iostream>

using namespace std;

int main() {
    // khai báo biến thông thường
    int nhietdo = 78;
    cout << "nhietdo: " << nhietdo << endl;
    cout << "Dia chi bo nho: " << &nhietdo << endl;

    //khai báo con trỏ
    int* a;
    a = new int;

    //xuất trực tiếp giá trị của con trỏ a -> trả về địa chỉ ô nhớ mà a chiếm
    cout << "dia chi a tro toi: " << a << endl;

    //gán giá trị cho biến con trỏ
    *a = 25; //gán giá trị 25 cho biến con trỏ;
    cout << "gia tri nam tren bie con tro: " << *a << endl;

    // 2.1 Toán tử 1 ngôi: &
    //khai bao biến con trỏ
    int* controT;
    // tỏ biến controT vào ô nhớ của biến nhietdo
    controT = &nhietdo;
    cout << "dia chi ma controT tro toi: " << controT << endl;

    // gia tri nam trên ô nhớ của controT
    cout << "gia tri nam tren o nho cua controT: " << *controT << endl;

    // thay đổi giá trị của controT
    *controT = 90;
    cout << "nhietdo: " << nhietdo << endl;
    cout << "gia tri nam tren o nho cua controT: " << *controT << endl;

    //gán giá trị cho con tro void
    int NguyenA;
    void* gicungduoc;

    gicungduoc = &NguyenA;

    *(int*)gicungduoc = 65;
    cout << &NguyenA << " - " << NguyenA << endl;
    cout << gicungduoc << " - " << *(int*)gicungduoc << endl;

    

}