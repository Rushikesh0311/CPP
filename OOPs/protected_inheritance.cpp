#include <iostream>
using namespace std;
class Base
{
    public:
        int x;
    private:
        int z;
    protected:
        int y;        
};
class child : protected Base
{
    public:
        void show(){
            x = 10;
            y = 20;
            //z = 30;

            cout << x << " " << y << endl;
        }
};
int main(){
    child d;
    // d.x = 50; //  not allowed (became protected)
    // d.y = 60; //  not allowed
   d.show();
}