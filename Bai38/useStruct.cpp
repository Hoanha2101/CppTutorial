#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;

    void introduce() {
        cout << "Toi la " << name << ", " << age << " tuoi." << endl;
    }
};

int main() {
    Person p;
    p.name = "Hoan";
    p.age = 20;
    p.introduce();
}
