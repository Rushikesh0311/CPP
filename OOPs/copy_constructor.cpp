#include <iostream>
using namespace std;
class Test
{
    private:
        int x,y;

    public:
        int* ptr;
        Test(int a,int b,int c) // para constructor
        {
            x = a;
            y = b;
            ptr = new int;
            *ptr = c;
        }    
        void display(){ //member functions
            cout << "X: " << x << endl;
            cout << "Y: " << y << endl;
            cout << "*ptr: " << *ptr << endl;
        }
};
int main(){
    Test obj1(5,7,18);
    obj1.display();

    Test obj2 = obj1; // copy constructor
    obj2.display();

    *(obj2.ptr) = 99;

    obj1.display();
    obj2.display();

}
