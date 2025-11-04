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
        void read_ele(){
            cout << "Enter Array Size: ";
            cin >> size;
            ptr = new int[size];
            for(int i=0;i<size;i++)
            {
                cin >> ptr[i];
            }

        }
        void print_ele(){
            cout << "Array elements: ";
            for(int i=0;i<size;i++)
            {
                cout << ptr[i] << " ";
            }
            cout << endl;
        }
        int Even_Count(){
            int count = 0;
            for(int i=0;i<size;i++)
            {
                if(ptr[i] % 2==0)
                    count++;    
            }
            return count;
        }
};
int main(){
    Array arr;
    arr.read_ele();
    arr.print_ele();
    cout << "Count Of Even ele: " << arr.Even_Count() << endl;
}