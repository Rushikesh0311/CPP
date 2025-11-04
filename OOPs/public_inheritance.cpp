#include <iostream>
using namespace std;

class Base {
public:
    int x;          // accessible everywhere
protected:
    int y;          // accessible only inside class or derived
private:
    int z;          // accessible only inside Base
};

class Derived : public Base {  // PUBLIC inheritance
public:
    void show() {
        x = 10;    //  allowed (public → public)
        y = 20;    //  allowed (protected → protected)
        // z = 30; //  not allowed (private stays hidden)
        cout << x << " " << y << endl;
    }
};

int main() {
    Derived d;
    d.show();
    d.x = 50;   //  allowed (public)
    // d.y = 60; //  not allowed (protected)
}
