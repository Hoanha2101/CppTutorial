#include <iostream>
#include <random>

using namespace std;

int main() {
    int  mang1[2][3];
    string mang2[3][3];
    double mang3[2][1];

    const int row = 3;
    const int col = 4;

    int mang4[row][col] = {{1,2,3,4}, {4,3,2,1}, {15,6,7,8}};

    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++)
        {
            cout << mang4[i][j] << " ";
        };
        cout << endl;
    };

    cout << endl;

    // Mảng ngẫu nhiên
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0,99);

    int mang5[row][col];
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++)
        {
            mang5[i][j] = dis(gen);
        };
    };

    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++)
        {
            cout << mang5[i][j] << " ";
        };
        cout << endl;
    };
}