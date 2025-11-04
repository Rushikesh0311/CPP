#include <iostream>
using namespace std;
class Test
{
    private:
        int x,y;

    public:
        int* ptr;
        Test(int a=0,int b=0,int c=0) // para constructor
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
        Test(Test& ref) // copy const
        {
            cout << "wertg" << endl;
            x = ref.x;
            y = ref.y;
            ptr = new int;
            *ptr = *(ref.ptr);
        }
};
int main(){
    Test obj1(5,7,18);
    obj1.display();

    //Test obj2 = obj1;
    Test obj2;
    obj2 = obj1; // copy const not called but data will print
    *(obj2.ptr) = 76;
    //obj2.display();

    //*(obj2.ptr) = 99;

    obj1.display();
    obj2.display();

}
