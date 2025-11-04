#include <iostream>
using namespace std;
class Base
{
    public:
        int x;
    protected:
        int y;
    private:
        int z;

};

class child : private Base
{
    public:
        void show(){
            x = 20; // allowed --> public became private
            y = 30; // allowed --> protected became private 
            //z = 40; --> not accessible private

            cout << x << " " << y << endl;
        }
};
int main(){
    child d;

   //  d.x = 50; --> it decame private now
   // d.y = 60; --> ------||------------
   d.show(); // accessible only through public function
}