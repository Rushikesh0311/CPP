#include <iostream>
using namespace std;
class Array
{
    int size;
    int* ptr;

    public:
        Array(){
            size = 0;
            ptr = NULL;
        }
        void read(){
            cout << "Enter the  size: " ;
            cin >> size;
            ptr = new int[size];
            cout << "Array ele: ";
            for(int i=0;i<size;i++)
            {
                cin >> ptr[i];
            }
        }
        void print()
        {
            cout << "Array ele: ";
            for(int i=0;i<size;i++)
            {
                cout << ptr[i] << " ";
            }
            cout << endl;
        }
        int max(){
            int m = ptr[0];
            for(int i=0;i<size;i++)
            {
                if(ptr[i] > m)
                    m = ptr[i];
            }
            return m;
        }
};
int main(){
    Array ob1;
    ob1.read();
    ob1.print();
    cout << "Max ele: " << ob1.max() << endl;
}