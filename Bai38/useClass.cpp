#include <iostream>
using namespace std;

class Person {
    string name;
    int age;
public:
    void setInfo(string n, int a) {
        name = n;
        age = a;
    }
    void introduce() {
        cout << "Toi la " << name << ", " << age << " tuoi." << endl;
    }
};

int main() {
    Person p;
    // p.name = "Hoan"; ❌ lỗi vì name là private
    p.setInfo("Hoan", 20);
    p.introduce();
}
