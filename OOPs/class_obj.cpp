#include <iostream>
using namespace std;
class math
{
    public:
        int x,y,z;
        void printf(){ // member func
            cout << " X: " << x << endl;
             cout << " Y: " << y << endl;
              cout << " Z: " << z << endl;
        }
};
int main(){

    math o1,o2;
    o1.x = 99;
    o1.y = 88;
    o1.z = 77;

    o1.printf();
    o2.printf();

}