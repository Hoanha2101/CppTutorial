#include <iostream>

using namespace std;

int main() {
    char kytu[5] = {'a', 'b', 'c', 'd'}; //bắt buộc chừa lại 1 kí tự cho kí từ null (0)
    cout << kytu << endl;

    char* chuoi;
    chuoi = new char[51]; //max kí tự có thể chứa là 50 + chừa 1 chỗ cho kí tự null

    chuoi[0] = 'a';
    chuoi[1] = 'b';
    chuoi[2] = '\0'; //Dù nhập ít kí tự nhưng bắt buộc phải có kí tự null 

    cout << chuoi << endl;

    //khai bao hằng chuỗi;
    char chuoi2[] = "Xin";
    cout << chuoi2 << endl;
    cout << sizeof(chuoi2)/sizeof(chuoi2[0]) << endl; // ra kết quả là 4 vì có kí tự null nữa.

}